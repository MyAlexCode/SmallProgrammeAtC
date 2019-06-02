import random
'''
Στόχος : 
Πάρτε όσα φασόλια μπορείτε...

Προετοιμασία Παιχνιδιού : 
Βγάζουμε από την τράπουλα τα 5άρια, τα 6άρια και όλες τις φιγούρες. Κάποιος πρέπει να κάνει την Μάνα, συνήθως αυτός που θα τραβήξει τον Άσσο. Μοιράζει λοιπόν ή Μάνα από ένα φύλλο σε όλους (και σε αυτή) και ξεκινάμε.

Διαδικασία παιχνιδιού : 

Στην αρχή ποντάρει η Μάνα όσα φασόλια θέλει και τα βάζει στο κέντρο. Αυτό σημαίνει ότι θα εξακολουθεί να κάνει Μάνα σε κάθε γύρο μέχρι, είτε να τα χάσει όλα, είτε να τα τριπλασιάσει, Στούκι δηλαδή. Όταν τα τριπλασιάσει ακόλουθη ο τελευταίος γύρος για την Μάνα και ότι έχει μείνει στο κέντρο τα παίρνει και κάνει ο επόμενος Μάνα.
Όλοι έχουν το πρώτο φύλλο κρυφό. Αφού το δουν και έρθει η σειρά τους ποντάρουν όχι παραπάνω από ότι υπάρχει στο κέντρο. Η Μάνα μπορεί να βάλει και όριο στο ποντάρισμα άμα θέλει που θα ισχύει μόνο πριν το Στούκι, μετά ποντάρει ο καθένας όσα θέλει.
Ξεκινάμε με τον πρώτο παίχτη. Ζητάει φύλλα από την Μάνα και του τα δίνει κλειστά. Συνεχίζει να ζητάει φύλλα μέχρι να καεί (22 και πάνω) ή να σταματήσει.
Μετά (αν σταμάτησε) παίζει η Μάνα με ανοιχτά φύλλα. Κατά την διάρκεια όλων τον γύρων που είναι Μάνα μπορεί να κάψει μέχρι 2 φύλλα. Στον γύρο που έκαψε κάποιο φύλλο και οι άλλη παίχτες μπορούν να κάψουν το ίδιο φύλλο αν θέλουν.

Ο παίχτης :
Αν φέρει 21 κερδίζει το ποντάρισμα του χωρίς να παίξει η Μάνα.
Με πενταφυλλία πάλι κερδίζει.
Με 2 Άσσους στα 2 πρώτα του φύλλα κερδίζει. 
Με 3 εφτάρια παίρνει ότι βρίσκεται στο κέντρο.
Με μεγαλύτερο φύλλο από την Μάνα κερδίζει.
Αν καεί η Μάνα πάλι κερδίζει. 
Χάνει το ποντάρισμα (πάει στο κέντρο μαζί με τα υπόλοιπα) αν καεί ή αν η Μάνα έχει ίσο ή μεγαλύτερο φύλλο.

Σε περίπτωση που κερδίσει δείχνει τα φύλλα του, διαφορετικά αν καεί τα βάζει στην άκρη χωρίς να τα δείξει.
Αφού τελειώσει ο παίχτης πάμε στον επόμενο. Η Μάνα τραβάει για αυτήν ένα κλειστό φύλλο και ο επόμενος παίχτης ποντάρει και συνεχίζετε με τον ίδιο τρόπο. Σε περίπτωση που στον προηγούμενο παίχτη η Μάνα δεν χρειάστηκε να σηκώσει δεύτερο φύλλο, παίζει με τον επόμενο με το ίδιο φύλλο που είχε χωρίς να το αλλάξει.

Οι Άσσοι μετράνε για 11, εκτός αν έρθουν 2 Άσσοι στην αρχή οπότε είναι 21.

Παραλλαγές :
Με εξαφυλλία ο παίχτης κερδίζει ότι βρίσκετε στο κέντρο. Και γενικά ότι άλλο σκεφτείτε, αλλά καλό θα είναι να το κανονίζετε πριν ξεκινήσετε.

Στοιχεία : 
Παίχτες : 3 και πάνω.
Χαρτιά : 32 (χωρίς 5, 6, J, Q, K)
'''
kart=['Assos','2','3','4','7','8','9','10']
sxima=['Καρό','Κούπα','Μπαστούνι','Σπαθί']
mydict={'Assos':11,'2':2,'3':3,'4':4,'7':7,'8':8,'9':9,'10':10}
pontarisma =20
HumanPon=50
def zero():
    global score
    score=0
    return score
def scores(cart):
    global score
    score += cart
    return score
def play():
    play=random.choice(kart)
    play1=random.choice(sxima)
    play2=play+play1
    return play ,play1,play2
    

while True:
    filaPouExounPexei=[]
    HfilaPouExounPexei=[]
    CfilaPouExounPexei=[]
    zero()
    met=0
    eftaria=0
    flag=0
    firstcart=''
    secondcart=''
    humanplayer=0
    computerplayer=0
    winFlag=0
    pon=0
    
    while pon <1 or pon > 3:
        pon=int(input('Πόσα φασόλια θελετε να ποντάρετε<1-3>'))
    while True:
        met+=1
        a,b,c =play()
        if a =='7':
            eftaria+=1
        if eftaria == 3 and humanplayer==21:
            print('κερδίσατε με 3 εφτάρια')
            flag=1
            winFlag=1
            HumanPon=pontarisma
            break
        if met == 1:
            firstcart=a
        if met == 2:
            secondcart=a
        if firstcart== 'Assos' and secondcart=='Assos':
            print('κερδίσατε με δυο άσσους')
            flag=1
            winFlag=1
            HumanPon+=pon
            pontarisma-=pon
            break
        #print(c)
        #print(10*'.')
        if c in filaPouExounPexei:
            continue
        else:
            filaPouExounPexei.append(c)
            HfilaPouExounPexei.append(c)
            #print(filaPouExounPexei)
            poin=mydict[a]
            #print(poin)
            score=scores(poin)
            humanplayer=score
            print ('τραβήξατε ' , a , b ,'έχετε ',score , 'Πόντους')
        if score >21 :
            print('Xάσατε καίκατε με σκορ{}'.format(humanplayer))
            flag=1
            HumanPon-=pon
            pontarisma+=pon
            break
        if score == 21 :
            print('κερδίσατε με σκόρ 21')
            flag=1
            winFlag=1
            HumanPon+=pon
            pontarisma-=pon
            break
            
        if len(HfilaPouExounPexei)== 5:
            print('κερδίσατε με πενταφυλλία')
            flag=1
            winFlag=1
            HumanPon+=pon
            pontarisma-=pon
            break
            
        choice=input('Θέλετε να τραβήξετε; #Πατήστε ότι πλήκτρο θέλετε και έπειτα enter για ΝΑΙ και σκέτο enter για ΟΧΙ ')
        if choice =='':
            break
    if flag == 0:
        zero()
        while True:
            met+=1
            a,b,c =play()
            if a =='7':
                eftaria+=1
            if eftaria == 3 and computerplayer==21 :
                print('Ο Υπολογιστής κερδίσε με 3 εφτάρια')
                flag=1
                winFlag=1
                HumanPon-=pon
                pontarisma+=pon
                break
            if met == 1:
                firstcart=a
            if met == 2:
                secondcart=a
            if firstcart== 'Assos' and secondcart=='Assos':
                print('Ο Υπολογιστής κερδίσε με δυο άσσους')
                flag=1
                winFlag=1
                HumanPon-=pon
                pontarisma+=pon
                break
            #print(c)
            #print(10*'.')
            if c in filaPouExounPexei:
                continue
            else:
                filaPouExounPexei.append(c)
                CfilaPouExounPexei.append(c)
                #print(filaPouExounPexei)
                poin=mydict[a]
                #print(poin)
                score=scores(poin)
                computerplayer=score
                print ('Ο Υπολογιστής τράβηξε ' , a , b ,'έχει ',score , 'Πόντους')
            if score > 17 or computerplayer >= humanplayer:
                break
            if score == 21 :
                print('Ο Υπολογιστής κερδίσε με σκόρ 21')
                flag=1
                winFlag=1
                HumanPon-=pon
                pontarisma+=pon
                break
                
            if len(CfilaPouExounPexei)== 5 and score <=21:
                print('Ο Υπολογιστής κερδίσε με πενταφυλλία')
                flag=1
                winFlag=1
                HumanPon-=pon
                pontarisma+=pon
                break
    if winFlag==0:
        if  computerplayer <=21 and computerplayer >= humanplayer:
            print('Νίκησε ο υπολογιστής')
            HumanPon-=pon
            pontarisma+=pon
        elif  computerplayer == 0 and humanplayer >21:
            print('')
        else :
            print('νικήσατε με σκόρ {} εναντίον του υπολογιστή που είχε σκορ {}'.format(humanplayer,computerplayer ))
            HumanPon+=pon
            pontarisma-=pon
    if pontarisma<=0 or pontarisma >= 60:
        print('Τελείωσε το παιχνίδι')
        if pontarisma<=0:
            print('Η μάνα έμεινε χωρίς χρήματα')
            break
        elif pontarisma >= 60:
            print('Η μάνα τριπλασίασε τα χρηματα της')
            break
    print(20*'*')
    print('υπάρχουν {} φασόλια στο τραπέζι ο παίκτης έχει {} φασολια '.format(pontarisma,HumanPon))
    print(20*'*')
    choice2=input('Θέλετε να Ξανά παίξετε ; #Πατήστε ότι πλήκτρο θέλετε και έπειτα enter για ΝΑΙ και σκέτο enter για ΟΧΙ ')
    if choice2 =='':
         break
