def chcek(dd):
    if dd.isnumeric() == True:
        n = int(dd)
        if n >0 and n <13:
            print("month is ",month_show(n))
        else:
            print("เลือก 1  ถึง  12 เท่านั้น")
    else:
        print("value error")
def month_show(d):
    swicther = {
        1: 'Jan',2: 'Feb' ,3: 'Mar',4:'Apr',5: 'May',6:'Jun',7:
         'Jul',8: 'Aug', 9:'Sep',10: 'Oct', 11:  'Nov',12: 'Dec',
    }
    return swicther.get(d)

d = input('เดือน')
chcek(d)