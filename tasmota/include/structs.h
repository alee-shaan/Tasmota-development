#ifndef STRUCTS_H
#define STRUCTS_H

#define MAX_NAME_LENGTH 50
#define MAX_NUMBER_LENGTH 20
#define MAX_ID_LENGTH 20
#define MAX_ADDRESS_LENGTH 100
#define MAX_INITIALS_LENGTH 3
#define MAX_EMPLOYEE_LENGTH 50

struct storeInfo{
  char store_name[MAX_NAME_LENGTH];
  char store_phone_number[MAX_NUMBER_LENGTH];
  char store_unique_id[MAX_ID_LENGTH];
  char store_address[MAX_ADDRESS_LENGTH];
};
struct employeeInfo
{
  char employee_name[MAX_NAME_LENGTH];
  char employee_initials[MAX_INITIALS_LENGTH];
  char employee_emailaddress[MAX_ADDRESS_LENGTH];
  char employee_phonenumber[MAX_NUMBER_LENGTH];
  char employee_type[MAX_EMPLOYEE_LENGTH];
  bool employee_emailnotify;
  bool employee_smsnotify;
};
struct passwordInfo
{
  char employee_password[MAX_NUMBER_LENGTH];
  char employee_passwordtime[MAX_ADDRESS_LENGTH];
};

#endif
