#include "List.h"

void List::show()
{
	for (int i = 0; i < size ; i++) {
		
		cout << person[i];
	}
}

void List::add()
{
	size++;
	Person* personCopy(person);
	
	int k;
	cout << "Them vao vi tri: ";
	cin >> k;
	for (int i = size - 1; i > k; i--) {
		person[i] = person[i+1];
	}

}

void List::upLoad(string SDT)
{
	for (int i = 0; i < size; i++) {
		if (*(person + i)->getSDT == SDT) {
			cout << person[i];
			break;
		}
	}
}

void List::deLete()
{
	int k;
	cout << "Xoa doi tuong thu: ";
	cin >> k;
	Person* personCopy = new Person[size];
	for (int i = 0; i < size; i++) {
	}
}

void List::linearSearch(int nhomMau)
{
	int count = 0;
	int k;
	cout << "Nhom mau can tim: ";
	cin >> k;
	for (int i = 0; i < size; i++) {
		if (*(person + i)->getNhomMau == k) {
			count++;
			cout << person[i];
		}
	}
	if (count == 0) cout << "khong tim thay" << endl;
}

void List::shellSort(bool (*comp)(int, int))
{
	for (int far = size / 2; far > 0; far /= 2) {
		for (int i = far; i < size; i++) {
			int temp = person[i].getNhomMau;
			for (int j = i; j - far >= 0; j -= far) {
				if (comp(person[j - far].getNhomMau, person[j].getNhomMau)) swap(person[j - far], person[j]);
			}
		}
	}
}

Person& List::operator[](int n)
{
	return *(person+n);
}
Person& List::operator=(Person, Person)
{
	
}
ostream& operator<<(Person p, ostream& os)
{
	os << "CMND: " << p.getCMND()
		<< " --- Tuoi: " << p.getTuoi()
		<< " --- Nhom mau: " << p.getNhomMau()
		<< " --- Gioi tinh: " << p.getGioiTinh()
		//		<< " --- Ngay sinh: " << p.getDate()
		<< endl;
	return os;
}
void swap(Person a, Person b) {
	Person temp = a;
	a = b;
	b = temp;
}
bool ascending(int left, int right) {
	if (left > right) return true;
	return false;
}
bool descending(int left, int right) {
	if (left < right) return true;
	return false;
}