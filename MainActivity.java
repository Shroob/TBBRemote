package com.TB.tbbremote;

//La partie bluetooth du code est inspiré de http://stackoverflow.com/questions/10327506/android-arduino-bluetooth-data-transfer

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Set;
import java.util.UUID;

import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemClock;
import android.view.View;
import android.widget.Button;
import android.widget.Chronometer;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends Activity implements View.OnClickListener {
	// initialisation des variables pour la connection bluetooth
	BluetoothAdapter mBluetoothAdapter;
	BluetoothDevice mmDevice;

	EditText myTextbox;
	BluetoothSocket mmSocket;

	OutputStream mmOutputStream;
	InputStream mmInputStream;
	Thread workerThread;
	byte[] readBuffer;
	int readBufferPosition;
	int counter;
	volatile boolean stopWorker;
	// initiation des variables de score
	int e1 = 0;
	int e2 = 0;
	// initialisation des variable de bouton
	private Button b1 = null;
	private Button b3 = null;
	private Button b2 = null;
	private Button b4 = null;
	private Button b5 = null;
	private Button b6 = null;
	private Button b7 = null;

	private Chronometer chronometer;
	boolean stopped = false;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);

		setContentView(R.layout.activity_main);// Chargement de l'interface
												// graphique

		/** Ecoute des boutons */
		b1 = (Button) findViewById(R.id.button1);
		b2 = (Button) findViewById(R.id.button2);
		b3 = (Button) findViewById(R.id.button3);
		b4 = (Button) findViewById(R.id.button4);
		b5 = (Button) findViewById(R.id.button5);
		b6 = (Button) findViewById(R.id.button6);
		b7 = (Button) findViewById(R.id.button7);
		b1.setOnClickListener(this);
		b2.setOnClickListener(this);
		b3.setOnClickListener(this);
		b4.setOnClickListener(this);
		b5.setOnClickListener(this);
		b6.setOnClickListener(this);
		b7.setOnClickListener(this);

		chronometer = (Chronometer) findViewById(R.id.chronometer1);

	}

	@Override
	public void onClick(View v) {
		/* Réagir au clic */
		TextView Score1 = (TextView) findViewById(R.id.textView2);
		TextView Score2 = (TextView) findViewById(R.id.textView3);
		String msg = "0";
		switch (v.getId()) {

		// +1 equipe1
		case R.id.button1:
			e1 += 1;
			Score1.setText(String.valueOf(e1));
			msg = "b\n";
			try {
				sendData(msg);
			} catch (IOException e3) {
				// TODO Auto-generated catch block
				e3.printStackTrace();
			}

			break;

		// -1 equipe1
		case R.id.button3:
			//if (e1 > 0) {
				e1 -= 1;
				Score1.setText(String.valueOf(e1));
				msg = "c\n";
				try {
					sendData(msg);
				} catch (IOException e3) {
					// TODO Auto-generated catch block
					e3.printStackTrace();
				}

			//}

			break;

		// +1 equipe2
		case R.id.button2:
			e2 += 1;
			Score2.setText(String.valueOf(e2));
			msg = "d\n";
			try {
				sendData(msg);
			} catch (IOException e3) {
				// TODO Auto-generated catch block
				e3.printStackTrace();
			}

			break;

		// -1 equipe2
		case R.id.button4:
			//if (e2 > 0) {
				e2 -= 1;
				Score2.setText(String.valueOf(e2));
				msg = "e\n";
				try {
					sendData(msg);
				} catch (IOException e3) {
					// TODO Auto-generated catch block
					e3.printStackTrace();
				}

			//}

			break;
//start
		case R.id.button5:
			if (!stopped) {
				chronometer.setBase(SystemClock.elapsedRealtime());
				chronometer.start();
				msg = "a\n";
				try {
					sendData(msg);
				} catch (IOException e3) {
					// TODO Auto-generated catch block
					e3.printStackTrace();
				}

			} else {

				chronometer.start();
				stopped = false;
				msg = "f\n";
				try {
					sendData(msg);
				} catch (IOException e3) {
					// TODO Auto-generated catch block
					e3.printStackTrace();
				}

			}
			break;
//Reset
		case R.id.button6:

			chronometer.stop();
			e1=0;
			e2=0;
			Score1.setText(String.valueOf(e1));
			Score2.setText(String.valueOf(e2));
			chronometer.setText("00:00");
			//stopped = true;
			msg = "f\n";
			try {
				sendData(msg);
			} catch (IOException e3) {
				// TODO Auto-generated catch block
				e3.printStackTrace();
			}

			break;
			
		//sync bluetooth
		case R.id.button7:
			findBT();
			try {
				openBT();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

		}
	}

	void findBT() {
		mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
		if (mBluetoothAdapter == null) {

		}

		if (!mBluetoothAdapter.isEnabled()) {
			Intent enableBluetooth = new Intent(
					BluetoothAdapter.ACTION_REQUEST_ENABLE);
			startActivityForResult(enableBluetooth, 0);
		}

		Set<BluetoothDevice> pairedDevices = mBluetoothAdapter
				.getBondedDevices();
		if (pairedDevices.size() > 0) {
			for (BluetoothDevice device : pairedDevices) {
				if (device.getName().equals("bt_slave")) {
					mmDevice = device;

					break;
				}
			}
		}

	}

	void openBT() throws IOException {
		UUID uuid = UUID.fromString("00001101-0000-1000-8000-00805f9b34fb"); // Standard
																				// //SerialPortService
																				// ID
		mmSocket = mmDevice.createRfcommSocketToServiceRecord(uuid);
		mmSocket.connect();

		mmOutputStream = mmSocket.getOutputStream();
		mmInputStream = mmSocket.getInputStream();

	}

	void sendData(String msg) throws IOException {

		// mmOutputStream.write(msg.getBytes());
		mmOutputStream.write(msg.getBytes());

	}

	void closeBT() throws IOException {
		stopWorker = true;
		mmOutputStream.close();
		mmInputStream.close();
		mmSocket.close();

	}

}
