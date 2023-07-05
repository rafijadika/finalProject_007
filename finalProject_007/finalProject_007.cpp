#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi = 0;
	float activity = 0;
	float exercise = 0;
	float tugasAkhir = 0;

public:
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

	float getActivity() {
		return activity;
	}

	float getExercise() {
		return exercise;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}

	int get0() {
		return 0;
	}
};

class Pemrograman : public MataKuliah {
public:
	void input() {
		cout << "\nmasukan total presensi " << endl;
		cout << "masukan total activity";
		cout << "masukan total exercise";
		cout << "masukan total tugasAkhir";
		int hitungNilaiAkhir = 0;
		cin >> hitungNilaiAkhir;

	}
};

int main() {
	MataKuliah* obj;

	obj = new MataKuliah();
	obj->input();
	cout << "absensi = " << obj->getPresensi() << endl;
	cout << "activity = " << obj->getActivity() << endl;
	cout << "exercise = " << obj->getExercise() << endl;
	cout << "tugas akhir = " << obj->getTugasAkhir << endl;

	delete obj;

	return 0;
}

