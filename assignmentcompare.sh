#!/bin/bash

read_all_data()
{
while IFS=, 
read -r serial_no time_ref account code country_code product_type value status; 
do
  [[ "$serial_no" != "serial_no" ]] && 
    echo " $serial_no "
    echo "time_ref : $time_ref"
  	echo "account : $account"
	  echo "code : $code"
    echo "country_code : $country_code"
    echo "product_type : $product_type"
    echo "value : $value"
	  echo "Status : $status"
done < data.csv
}

searchingdata()
{
  time_ref()
  {
  echo "Enter time ref to search: "
  read time_data
  grep $time_data data.csv
  }

  account()
  {
  echo "Enter Account to search: "
  read account_data
  grep $account_data data.csv
  }

  code()
  {
  echo "Enter code to search: "
  read code_data
  grep $code_data data.csv
  }

  country_code()
  {
  echo "Enter Country Code to search: "
  read country_code_data
  grep $country_code_data data.csv
  }

  product_type()
  {
  echo "Enter Product type to search: "
  read product_type_data
  grep $product_type_data data.csv
  }

  value()
  {
  echo "Enter Value to search: "
  read value_data
  grep $value_data data.csv
  }

  status()
  {
  echo "Enter Status to search: "
  read status
  grep $status data.csv
  }

  echo "1.Search by time ref"
  echo "2.Search by account"
  echo "3.Search by code"
  echo "4.Search by country code"
  echo "5.Search by product type"
  echo "6.Search by value"
  echo "7.Search by status"
  echo "Enter Your Searching Item Number: "
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
echo "3.Sorting Data"
echo "Enter your choice Item Number: "
read choice
if [ "$choice" -eq 1 ]; then
read_all_data
fi
if [ "$choice" -eq 2 ]; then
searchingdata
fi
if [ "$choice" -eq 2 ]; then
sorting_data
fi