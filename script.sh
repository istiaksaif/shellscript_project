#!/bin/bash

#Created By Istiak Saif on 4th April 2021

File=gsquarterly_december-2020-revised.csv
read_all_data()
{
  [ ! -f $File ] && 
  { 
    echo "$File file not found";
  }
  [ -f $File ] && 
  {
    while IFS=, 
    read -r serial_no time_ref account code country_code product_type value status; 
    do
      [[ "$serial_no" != "serial_no" ]] && 
        echo "serialNo : $serial_no "
        echo "time_ref : $time_ref"
        echo "account : $account"
        echo "code : $code"
        echo "country_code : $country_code"
        echo "product_type : $product_type"
        echo "value : $value"
        echo "Status : $status"
    done < $File
  }
}

searching_data()
{
  serial_No()
  {
  echo "Enter time ref to search: "
  read serial_no
  grep -w $serial_no $File
  }

  time_data()
  {
  echo "Enter time ref to search: "
  read time_ref
  grep -w $time_ref $File
  }

  account()
  {
  echo "Enter Account to search: "
  read account_data
  grep -w $account_data $File
  }

  code()
  {
  echo "Enter code to search: "
  read code_data
  grep -w $code_data $File
  }

  country_code()
  {
  echo "Enter Country Code to search: "
  read country_code_data
  grep -w $country_code_data $File
  }

  product_type()
  {
  echo "Enter Product type to search: "
  read product_type_data
  grep -w $product_type_data $File
  }

  value()
  {
  echo "Enter Value to search: "
  read value_data
  grep -w $value_data $File
  }

  status()
  {
  echo "Enter Status to search: "
  read status_data
  grep -w $status_data $File
  }

  echo "1.Search by SerialNo"
  echo "2.Search by time ref"
  echo "3.Search by account"
  echo "4.Search by code"
  echo "5.Search by country code"
  echo "6.Search by product type"
  echo "7.Search by value"
  echo "8.Search by status"
  echo "Enter Your Searching Item Number: "
  read choice
  if [ "$choice" -eq 1 ]; then
  serial_No
  fi
  if [ "$choice" -eq 2 ]; then
  time_data
  fi
  if [ "$choice" -eq 3 ]; then
  account
  fi
  if [ "$choice" -eq 4 ]; then
  code
  fi
  if [ "$choice" -eq 5 ]; then
  country_code
  fi
  if [ "$choice" -eq 6 ]; then
  product_type
  fi
  if [ "$choice" -eq 7 ]; then
  value
  fi
  if [ "$choice" -eq 8 ]; then
  status
  fi
  
}
sorting_data_asc()
{
  time_ref()
  {
    sort -t"," -k2 $File
  }

  account()
  {
  sort -t"," -k3 $File
  }

  code()
  {
  sort -t"," -k4 $File
  }

  country_code()
  {
  sort -t"," -k5 $File
  }

  product_type()
  {
  sort -t"," -k6 $File
  }

  value()
  {
  sort -t"," -k7 $File
  }

  status()
  {
  sort -t"," -k8 $File
  }

  echo "1.Sort by time ref"
  echo "2.Sort by account"
  echo "3.Sort by code"
  echo "4.Sort by country code"
  echo "5.Sort by product type"
  echo "6.Sort by value"
  echo "7.Sort by status"
  echo "Enter Your Sort Item Number: "
  read choice

  if [ "$choice" -eq 1 ]; then
  time_ref
  fi
  if [ "$choice" -eq 2 ]; then
  account
  fi
  if [ "$choice" -eq 3 ]; then
  code
  fi
  if [ "$choice" -eq 4 ]; then
  country_code
  fi
  if [ "$choice" -eq 5 ]; then
  product_type
  fi
  if [ "$choice" -eq 6 ]; then
  value
  fi
  if [ "$choice" -eq 7 ]; then
  status
  fi
}
sorting_data_desc()
{
  time_ref()
  {
    sort -t"," -rk2 $File
  }

  account()
  {
  sort -t"," -rk3 $File
  }

  code()
  {
  sort -t"," -rk4 $File
  }

  country_code()
  {
  sort -t"," -rk5 $File
  }

  product_type()
  {
  sort -t"," -rk6 $File
  }

  value()
  {
  sort -t"," -rk7 $File
  }

  status()
  {
  sort -t"," -rk8 $File
  }

  echo "1.Sort by time ref"
  echo "2.Sort by account"
  echo "3.Sort by code"
  echo "4.Sort by country code"
  echo "5.Sort by product type"
  echo "6.Sort by value"
  echo "7.Sort by status"
  echo "Enter Your Sort Item Number: "
  read choice

  if [ "$choice" -eq 1 ]; then
  time_ref
  fi
  if [ "$choice" -eq 2 ]; then
  account
  fi
  if [ "$choice" -eq 3 ]; then
  code
  fi
  if [ "$choice" -eq 4 ]; then
  country_code
  fi
  if [ "$choice" -eq 5 ]; then
  product_type
  fi
  if [ "$choice" -eq 6 ]; then
  value
  fi
  if [ "$choice" -eq 7 ]; then
  status
  fi
}

echo "1.Read All Data"
echo "2.Searching"
echo "3.Sorting Data by Ascending order"
echo "4.Sorting Data by Descending order"
echo "Enter your choice Item Number: "
read choice
if [ "$choice" -eq 1 ]; then
read_all_data
fi
if [ "$choice" -eq 2 ]; then
searching_data
fi
if [ "$choice" -eq 3 ]; then
sorting_data_asc
fi
if [ "$choice" -eq 4 ]; then
sorting_data_desc
fi