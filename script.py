import csv

def readalldata():
    csv_file = open('gsquarterly_december-2020-revised.csv','r')
    csv_reader = csv.reader(csv_file, delimiter=',')
    next(csv_reader)

    for row in csv_reader:
        serial_no, time_ref, account, code, country_c, product_t, value, status = row
        print(row)


def searchdata():
    def searchbyserial_no():
        serial_no = input('Enter serial no for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if serial_no == row[0]:
                print(row)

    def searchbytime_ref():
        time_ref = input('Enter time_ref for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if time_ref == row[1]:
                print(row)

    def searchbyaccount():
        account = input('Enter account for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if account == row[2]:
                print(row)

    def searchbycode():
        code = input('Enter code for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if code == row[3]:
                print(row)

    def searchbycountry_c():
        country_c = input('Enter country code for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if country_c == row[4]:
                print(row)

    def searchbyproduct_t():
        product_t = input('Enter product type for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if product_t == row[5]:
                print(row)

    def searchbyvalue():
        value = input('Enter value for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv','r'))

        for row in csv_file:
            if value == row[6]:
                print(row)

    def searchbystatus():
        status = input('Enter status for search:\n')
        csv_file = csv.reader(open('gsquarterly_december-2020-revised.csv', 'r'))

        for row in csv_file:
            if status == row[7]:
                print(row)

    print('Enter 1 to search by serial no.')
    print('Enter 2 to search by time reference.')
    print('Enter 3 to search by account.')
    print('Enter 4 to search by code.')
    print('Enter 5 to search by country code.')
    print('Enter 6 to search by product type.')
    print('Enter 7 to search by value.')
    print('Enter 8 to search by status.')

    src = int(input('Enter here: '))
    if src == 1:
        searchbyserial_no()
    elif src == 2:
        searchbytime_ref()
    elif src == 3:
        searchbyaccount()
    elif src == 4:
        searchbycode()
    elif src == 5:
        searchbycountry_c()
    elif src == 6:
        searchbyproduct_t()
    elif src == 7:
        searchbyvalue()
    elif src == 8:
        searchbystatus()
    else:
        print('Sorry, invalid input')

def sortdata():
    def sort_csv(n, val):
        sorted_list = []
        heading = []

        with open(r'gsquarterly_december-2020-revised.csv','r') as file:
            read = csv.reader(file, delimiter=',')
            
            read_list = list(read)
            heading = read_list[0]
            print(heading)

            if val == 0:
                sorted_list = sorted(read_list[1:], key=lambda x: x[n])

            elif val == 1:
                sorted_list = sorted(read_list[1:], key=lambda x: float(x[n]))
            for each in sorted_list:
                print(each)

        with open(r'gsquarterly_december-2020-revised.csv','w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(heading)
            writer.writerow(sorted_list)


    with open(r'gsquarterly_december-2020-revised.csv','r') as file:
        read = csv.reader(file, delimiter=',')
        heading = list(read)[0]
        print("Select one of the column to sort accordingly:")
        i = 0
        for each in heading:
            print(i, ":", each)
            i += 1
    n = int(input("Enter your choice:"))
    value = int(input("Specify the column is:\n0 : string\n1: integer\n:"))
    sort_csv(n, value)

print('Enter 1 for read all data.')
print('Enter 2 for search data.')
print('Enter 3 for sort data.')



rss= int(input('Enter here: '))
if rss == 1:
    readalldata()
elif rss == 2:
    searchdata()
elif rss == 3:
    sortdata()


else:
    print('Sorry, invalid input')