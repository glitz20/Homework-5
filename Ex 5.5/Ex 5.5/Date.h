#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	Date();
	Date(int time_since_epoch);
	Date(int year, int month, int day);
	Date(const Date& date);

	void setDate(int time_since_epoch);
	void setDate(const Date& date);
	int getYear() const;
	int getMonth() const;
	int getDay() const;

};

#endif // DATE_H_
