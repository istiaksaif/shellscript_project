#include <iostream>
#include<fstream>>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
  int x;
    ifstream ip("gsquarterly_december-2020-revised.csv");

  cout<<"1.Read"<<endl;
  cout<<"2.Search"<<endl;
  cout<<"3.Sort"<<endl;
  cout<<"Enter the keyword id to proceed: ";
  cin>>x ;

  if ( x == 1){
        if (!ip.is_open())  cout << "ERROR: File Open" << '\n';

  string serial_no;
  string time_ref;
  string account;
  string code;
  string country_code;
  string product_type;
  string value;
  string status;
  while(ip.good()){

    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

     cout << "Serial No: "<<serial_no<< '\n';
     cout << "Time Ref: "<<time_ref << '\n';
     cout << "Account: "<<account << '\n';
     cout << "Code: "<<code<< '\n';
     cout << "Country Code: "<<country_code << '\n';
     cout << "Product Type: "<<product_type << '\n';
     cout << "Value: "<<value << '\n';
     cout << "Status: "<<status << '\n';
  }

  ip.close();
}

  else if (x==2){
    if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

   string serial_no;
   string time_ref;
   string account;
   string code;
   string country_code;
   string product_type;
   string value;
   string status;

   string serial_input;
   string time_input;
   string account_input;
   string code_input;
   string country_input;
   string product_input;
   string value_input;
   string status_input;
   string choice;

    cout<<"Press 1 to search by serial number: \n";
    cout<<"Press 2 to search by time_ref: \n";
    cout<<"Press 3 to search by account: \n";
    cout<<"Press 4 to search by code: \n";
    cout<<"Press 5 to search by country_code: \n";
    cout<<"Press 6 to search by product type: \n";
    cout<<"Press 7 to search by value: \n";
    cout<<"Press 8 to search by status: \n";

    cin>> choice;

    if (choice == "1"){
     cout<<"Enter Serial Number with double quotation (''serial number''): ";
     cin>> serial_input;

   while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (serial_input == serial_no)
        {
            std::cout<<serial_no<<" "<<time_ref<<" "<<account<<" "<<code<<" "<<country_code<<" "<<product_type<<" "<<value<< " " <<status<<'\n';
        }
  }

  ip.close();
}

 if (choice == "2"){
    cout<<"Enter Time_Ref: ";
    cin>> time_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (time_input == time_ref)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}



 if (choice == "3"){

     cout<<"Enter Account with double quotation (''account''): ";
     cin>> account_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (account_input == account)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}


 if (choice == "4"){
    cout<<"Enter Code with double quotation (''code''): ";
    cin>> code_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (code_input == code)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}

 if (choice == "5"){
    cout<<"Enter Country Code with double quotation (''country code''): ";
    cin>> country_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (country_input == country_code)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}

 if (choice == "6"){
    cout<<"Enter Product Type with double quotation (''product type''): ";
    cin>> product_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (product_input == product_type)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}

 if (choice == "7"){
    cout<<"Enter Value: ";
    cin>> value_input;

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (value_input == value)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}

 if (choice == "8"){
    cout<<"Enter Status with double quotation (''status''): ";
    cin>> status_input;


  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    if (status_input == status)
        {
            std::cout<<serial_no <<" "<<time_ref<< " " <<account<<" "<<code<<" " <<country_code<<" "<<product_type<<" "<<value<< " " <<status<< '\n';
        }
  }

  ip.close();
}

 }

 else if(x==3){
    if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

  string serial_no;
  string time_ref;
  string account;
  string code;
  string country_code;
  string product_type;
  string value;
  string status;

  vector <string> serial_sort;
  vector <string> time_sort;
  vector <string> account_sort;
  vector<string> code_sort;
  vector<string> country_sort;
  vector<string> product_sort;
  vector<string> value_sort;
  vector<string> status_sort;

    while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');

    serial_sort.push_back(serial_no);
    time_sort.push_back(time_ref);
    account_sort.push_back(account);
    code_sort.push_back(code);
    country_sort.push_back(country_code);
    product_sort.push_back(product_type);
    value_sort.push_back(value);
    status_sort.push_back(status);

  }
    cout<<"Press 1 to sort by serial number: \n";
    cout<<"Press 2 to sort by time_ref: \n";
    cout<<"Press 3 to sort by account: \n";
    cout<<"Press 4 to sort by code: \n";
    cout<<"Press 5 to sort by country_code: \n";
    cout<<"Press 6 to sort by product type: \n";
    cout<<"Press 7 to sort by value: \n";
    cout<<"Press 8 to sort by status: \n";

  int choice;
  cin>> choice;
  if (choice ==1){
   while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');
  }

  vector<string> s = serial_sort;
  sort(s.begin(),s.end());
  for(int i=0;i<s.size();i++)
  {
      for (int j=0;j<serial_sort.size();j++)
    {
     if(serial_sort[j] == s[i] )
      {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        s.erase(s.begin()+i);
        }

    }

  }
   ip.close();
}
if (choice ==2){
        while(ip.good()){
            getline(ip,serial_no,',');
            getline(ip,time_ref,',');
            getline(ip,account,',');
            getline(ip,code,',');
            getline(ip,country_code,',');
            getline(ip,product_type,',');
            getline(ip,value,',');
            getline(ip,status,'\n');
          }

  vector<string> t = time_sort;
  sort(t.begin(),t.end());
  for(int i=0;i<t.size();i++)
  {
     for (int j=0;j<time_sort.size();j++)
     {
     if(time_sort[j] == t[i] )
      {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        t.erase(t.begin()+i);
      }

     }
  }
  ip.close();
}

if (choice ==3){
    while(ip.good()){
        getline(ip,serial_no,',');
        getline(ip,time_ref,',');
        getline(ip,account,',');
        getline(ip,code,',');
        getline(ip,country_code,',');
        getline(ip,product_type,',');
        getline(ip,value,',');
        getline(ip,status,'\n');
  }


  vector<string> a = account_sort;
  sort(a.begin(),a.end());
  for(int i=0;i<a.size();i++)
  {
      for (int j=0;j<account_sort.size();j++)
      {
     if(account_sort[j] == a[i] )
        {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        a.erase(a.begin()+i);
        }

      }
  }
  ip.close();
}

if (choice ==4){
        while(ip.good()){
            getline(ip,serial_no,',');
            getline(ip,time_ref,',');
            getline(ip,account,',');
            getline(ip,code,',');
            getline(ip,country_code,',');
            getline(ip,product_type,',');
            getline(ip,value,',');
            getline(ip,status,'\n');
        }


  vector<string> c = code_sort;
  sort(c.begin(),c.end());
  for(int i=0;i<c.size();i++)
  {
     for (int j=0;j<code_sort.size();j++)
     {
         if(code_sort[j] == c[i] )
          {
             cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

            c.erase(c.begin()+i);
          }

     }
  }
  ip.close();
}
     if (choice ==5){

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');
  }


  vector<string> c1 = country_sort;
  sort(c1.begin(),c1.end());
  for(int i=0;i<c1.size();i++)
  {
     for (int j=0;j<country_sort.size();j++)
     {
     if(country_sort[j] == c1[i] )
      {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        c1.erase(c1.begin()+i);
      }

     }

 }
  ip.close();
     }
     if (choice ==6){

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');
  }


  vector<string> p = product_sort;
  sort(p.begin(),p.end());
  for(int i=0;i<p.size();i++)
  {
     for (int j=0;j<product_sort.size();j++)
     {
      if(product_sort[j] == p[i] )
       {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        p.erase(p.begin()+i);
       }

     }

}
  ip.close();
     }
     if (choice ==7){

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');
  }


  vector<string> v = value_sort;
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
      for (int j=0;j<value_sort.size();j++)
      {
     if(value_sort[j] == v[i] )
        {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        v.erase(v.begin()+i);
        }

      }

  }
  ip.close();
     }
     if (choice ==8){

  while(ip.good()){
    getline(ip,serial_no,',');
    getline(ip,time_ref,',');
    getline(ip,account,',');
    getline(ip,code,',');
    getline(ip,country_code,',');
    getline(ip,product_type,',');
    getline(ip,value,',');
    getline(ip,status,'\n');
  }

  vector<string> s1 = status_sort;
  sort(s1.begin(),s1.end());
  for(int i=0;i<s1.size();i++)
  {
     for (int j=0;j<status_sort.size();j++)
     {
     if(status_sort[j] == s1[i] )
      {
         cout<<serial_sort[j]<<" "<<time_sort[j]<<" "<<account_sort[j]<<" "<<code_sort[j]<<" "<<country_sort[j]<<" "<<product_sort[j]<<" "<<value_sort[j]<< " " <<status_sort[j]<<'\n';

        s1.erase(s1.begin()+i);
      }

     }

  }
  ip.close();
     }

  else
     {
    cout<<"Wrong Sorting Keyword"<<endl;
     }

}

  else
     {
     cout<<"Wrong Keyword ID"<<endl;
     }
 return 0;
}
