#include<iostream>

class Date {
	int year_;
	int month_; // 1 부터 12 까지.
	int day_; // 1 부터 31 까지.

public:
	void SetDate(int year, int month, int date) {
		year_ = year;
		month_ = month;
		day_ = date;
	}

	void AddDay(int inc) {
		if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7|| month_ == 1 || month_ == 10 || month_ == 12) {
			if (day_ + inc > 31) {
				day_ = (day_ + inc) - 31;
				AddMonth(1);
			}
			else
				day_ += inc;
		}
		else if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11) {
			 if (day_ + inc > 30) {
				day_ = (day_ + inc) - 30;
				AddMonth(1);
			}
			 else
				day_ += inc;
		}
		else if (month_ = 2 && (year_ % 4 == 0) && (year_ % 100 != 0) || (year_ % 400 == 0)) {
			 if (day_ + inc > 29) {
				day_ = (day_ + inc) - 29;
				AddMonth(2);
			}
			 else
				day_ += inc;
		}
		else {
			if (day_ + inc > 28) {
				day_ = (day_ + inc) - 28;
				AddMonth(3);
			}
			else
				day_ += inc;
		}
	}
	void AddMonth(int inc) {
		if (month_ + inc > 12) {
			AddYear(1);
			month_ = (month_ + inc) - 12;
		}
		else if (month_ + inc <= 12) {
			month_ += inc;
		}
	}
	void AddYear(int inc) {
		year_ += inc;
	}
	void ShowDate() {
		std::cout << year_ << "년 " << month_ << "월 " << day_ << "일 입니다" << std::endl;
	}

	void ShowMonth() {
		std::cout << month_ << std::endl;
	}
};

int main(){
	Date day1;
	day1.SetDate(2012, 2, 28);
	day1.AddDay(3);
	day1.ShowDate();

	return 0;
}


/*
*	switch (month_)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day_ + inc > 31) {
				AddMonth(1);
				day_ = (day_ + inc) - 31;
			}
			else
				day_ += inc;
		}

		}
*/
