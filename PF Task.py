def main():
    main=total_amount
    return(main)



def trimmer():
    trimmer=trimmer*1
    print(trimmer)
trimmer=int(input("price of trimmer is"))
def jacket():
    jacket=jacket*4
    print(jacket)
jacket=int(input("Price of jacket is"))
def shoes():
    shoes=shoes*1
    print(shoes)
shoes=int(input("Price of shoes is"))
def laptop():
 laptop=laptop*3
 print(laptop)
laptop=int(input("Price of laptop is"))



def bill():
    bill=trimmer+shoes+jacket+laptop
    print(bill)

discount_rate=0
if 50<bill<100:
    discount_rate=bill/100*5
    print("discount_rate",discount_rate)
elif 100<bill<200:
    discount_rate=bill/100*10
    print("discount rate is",discount_rate)
elif 200<bill<500:
    discount_rate=bill/100*15
    print("discount rate is" ,discount_rate)
else:
    discount_rate=bill/100*20
    print("discount rate is",discount_rate)

    discount_amount=bill-discount_rate
    print("discount amount",discount_amount)
    def tax(): 
        tax=discount_amount/100*8.5
    print("tax is ",tax)
    def total_amount():
        total_amount=discount_amount+tax
    print("total amount is",total_amount)




