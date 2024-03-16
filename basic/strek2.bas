 1000 REM (VERSION "STREK7", 1/12/75 RCL)
 1010 REM
 1020 REM
 1030 REM ***         *** STAR TREK ***       ***
 1040 REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
 1050 REM *** AS SEEN ON THE STAR TREK TV SHOW.
 1060 REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
 1070 REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
 1080 REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
 1090 REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
 1100 REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
 1110 REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
 1120 REM *** ADDRESS TO:   R.C.LEEDOM
 1130 REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
 1140 REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
 1150 RANDOMIZE
 1160 PRINT  TAB(15);"* * * STAR TREK * * *"
 1170 PRINT
 1180 PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
 1190 INPUT A$
 1200 IF A$<>"YES" GOTO 1280
 1210 PRINT "PLEASE WAIT  . . .";
 1220 GOSUB 11111
 1240 REM
 1250 REM ===============================================================
 1260 REM
 1270 REM  PROGRAM BEGINS HERE .....
 1280 DIM Q$(8)
 1290 FOR I = 1 TO 8
 1300     Q$(I) = SPACE$(24)
 1310 NEXT I
 1320 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
 1330 LET T=INT(RND(1)*20+20)*100
 1340 LET P1=3.14159/4
 1350 LET T0=T
 1360 LET T9=30
 1370 LET D0=0
 1380 LET E0=3000
 1390 LET E=E0
 1400 LET P=10
 1410 LET P0=P
 1420 LET S9=200
 1430 LET S=0
 1440 DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
 1450 REM
 1460 REM ===============================================================
 1470 REM
 1480 REM INITIALIZE INTERPRISE'S POSITION
 1490 LET Q1=INT(RND(1)*8+1)
 1500 LET Q2=INT(RND(1)*8+1)
 1510 LET S1=INT(RND(1)*8+1)
 1520 LET S2=INT(RND(1)*8+1)
 1530 MAT C=ZER
 1540 LET C(4,1)=-1
 1550 LET C(3,1)=-1
 1560 LET C(2,1)=-1
 1570 LET C(4,2)=-1
 1580 LET C(5,2)=-1
 1590 LET C(6,2)=-1
 1600 LET C(1,2)=1
 1610 LET C(2,2)=1
 1620 LET C(6,1)=1
 1630 LET C(7,1)=1
 1640 LET C(8,1)=1
 1650 LET C(8,2)=1
 1660 LET C(9,2)=1
 1670 DIM D(8)
 1680 FOR I=1 TO 8
 1690     LET D(I)=0
 1700 NEXT I
 1710 DIM D$(8)
 1720 RESTORE
 1730 READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
 1740 DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
 1750 DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
 1760 LET G4$="III"
 1770 DIM G1$(16)
 1780 FOR I=1 TO 16
 1790     READ G1$(I)
 1800 NEXT I
 1810 DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
 1820 DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
 1830 DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
 1840 LET B9=0
 1850 LET K9=0
 1860 LET A1$="NSLPTSDCX"
 1870 REM
 1880 REM ===============================================================
 1890 REM
 1900 REM  SET UP WHAT EXISTS IN GALAXY ...
 1910 FOR I=1 TO 8
 1920     FOR J=1 TO 8
 1930 	LET R1=RND(1)
 1940 	IF R1>.98 GOTO 1990
 1950 	IF R1>.95 GOTO 2020
 1960 	IF R1>.8  GOTO 2050
 1970 	LET K3=0
 1980 	GOTO 2070
 1990 	LET K3=3
 2000 	LET K9=K9+3
 2010 	GOTO 2070
 2020 	LET K3=2
 2030 	LET K9=K9+2
 2040 	GOTO 2070
 2050 	LET K3=1
 2060 	LET K9=K9+1
 2070 	LET R1=RND(1)
 2080 	IF R1>.96 GOTO 2110
 2090 	LET B3=0
 2100 	GOTO 2130
 2110 	LET B3=1
 2120 	LET B9=B9+1
 2130 	LET S3=INT(RND(1)*8+1)
 2140 	LET G(I,J)=K3*100+B3*10+S3
 2150 	REM K3=#KLINGONS B3=#STARBASES S3=#STARS
 2160 	LET Z(I,J)=0
 2170     NEXT J
 2180 NEXT I
 2190 LET K7=K9
 2200 LET X$=""
 2210 LET X0$=" IS "
 2220 IF B9<>0 GOTO 2280
 2230 LET B9=1
 2240 IF G(6,3)>=200 GOTO 2270
 2250 LET G(6,3)=G(6,3)+100
 2260 LET K9=K9+1
 2270 LET G(6,3)=G(6,3)+10
 2280 IF B9=1 GOTO 2330
 2290 LET X$="S"
 2300 LET X0$=" ARE "
 2310 PRINT " "
 2320 PRINT " "
 2330 PRINT "YOUR ORDERS ARE AS FOLLOWS:"
 2340 PRINT " "
 2350 PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
 2360 PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
 2370 PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
 2380 PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
 2390 PRINT " "
 2400 PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
 2410 INPUT A$
 2420 REM
 2430 REM ===============================================================
 2440 REM
 2450 REM *** HERE ANY TIME ENTER NEW QUADRANT ...
 2460 LET Z4=Q1
 2470 LET Z5=Q2
 2480 LET K3=0
 2490 LET B3=0
 2500 LET S3=0
 2510 LET G5=0
 2520 LET D4=.5*RND(1)
 2530 FOR I7 = 1 TO 8
 2540     Q$(I7)=SPACE$(24)
 2550 NEXT I7
 2560 IF Q1<1 GOTO 2770
 2570 IF Q1>8 GOTO 2770
 2580 IF Q2<1 GOTO 2770
 2590 IF Q2>8 GOTO 2770
 2600 GOSUB 10960
 2610 PRINT " "
 2620 IF T<>T0 GOTO 2660
 2630 PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
 2640 PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
 2650 GOTO 2670
 2660 PRINT "NOW ENTERING "G2$" QUADRANT ..."
 2670 PRINT " "
 2680 LET X=G(Q1,Q2)*.01
 2690 LET K3=INT(X)
 2700 LET B3=INT((X-K3)*10)
 2710 LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
 2720 IF K3=0 GOTO 2760
 2730 PRINT "COMBAT AREA      CONDITION RED"
 2740 IF S>200 GOTO 2760
 2750 PRINT "   SHIELDS DANGEROUSLY LOW"
 2760 MAT K=ZER
 2770 FOR I=1 TO 3
 2780     LET K(I,3)=0
 2790 NEXT I
 2800 REM
 2810 REM ===============================================================
 2820 REM
 2830 REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
 2840 REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
 2850 LET A$="<*>"
 2860 LET Z1=S1
 2870 LET Z2=S2
 2880 GOSUB 10550
 2890 FOR I=1 TO K3
 2900     GOSUB 10440
 2910     LET A$="+++"
 2920     LET Z1=R1
 2930     LET Z2=R2
 2940     GOSUB 10550
 2950     LET K(I,1)=R1
 2960     LET K(I,2)=R2
 2970     LET K(I,3)=200
 2980 NEXT I
 2990 FOR I=1 TO B3
 3000     GOSUB 10440
 3010     LET A$=">!<"
 3020     LET Z1=R1
 3030     LET Z2=R2
 3040     GOSUB 10550
 3050     LET B4=Z1
 3060     LET B5=Z2
 3070 NEXT I
 3080 FOR I=1 TO S3
 3090     GOSUB 10440
 3100     LET A$=" * "
 3110     LET Z1=R1
 3120     LET Z2=R2
 3130     GOSUB 10550
 3140 NEXT I
 3150 GOSUB 8070
 3160 IF S+E<=10 GOTO 3190
 3170 IF E>10 GOTO 3230
 3180 IF D(7)>=0 GOTO 3230
 3190 PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
 3200 PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
 3210 PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
 3220 GOTO 7850
 3230 PRINT "COMMAND";
 3240 INPUT A$
 3250 FOR I=1 TO 9
 3260     IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3320
 3270     IF I<>2 GOTO 3310
 3280     IF LEN(A$)<2 GOTO 3310
 3290     IF MID$(A$,2,1)="R" GOTO 3310
 3300     LET I=6
 3310     ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
 3320 NEXT I
 3330 PRINT "ENTER ONE OF THE FOLLOWING:"
 3340 PRINT "  NAV (TO SET COURSE)"
 3350 PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
 3360 PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
 3370 PRINT "  PHA (TO FIRE PHASERS)"
 3380 PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
 3390 PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
 3400 PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
 3410 PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
 3420 PRINT "  XXX (TO RESIGN YOUR COMMAND)"
 3430 PRINT " "
 3440 GOTO 3160
 3450 REM
 3460 REM ===============================================================
 3470 REM
 3480 REM  COURSE CONTROL BEGINS HERE
 3490 PRINT "COURSE(1-9)";
 3500 INPUT C1
 3510 IF C1>=1 GOTO 3540
 3520 PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
 3530 GOTO 3160
 3540 IF C1<9 GOTO 3570
 3550 IF C1>9 GOTO 3520
 3560 GOTO 3520
 3570 PRINT "WARP FACTOR (0-8)";
 3580 INPUT W1
 3590 IF W1 > 0 GOTO 3630
 3600 PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
 3610 PRINT "          SET WARP "W1" !"
 3620 GOTO 3160
 3630 IF W1<=8 GOTO 3670
 3640 PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
 3650 PRINT "         TAKE WARP "W1"!/"
 3660 GOTO 3160
 3670 IF D(1)>=0 GOTO 3710
 3680 IF W1<=0.2 GOTO 3710
 3690 PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
 3700 GOTO 3490
 3710 LET N=INT(W1*8+.5)
 3720 IF E-N>=0 GOTO 3840
 3730 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
 3740 PRINT "   FOR MANEUVERING AT WARP"W1"!'"
 3750 IF S<N-E GOTO 3160
 3760 IF D(7)<0 GOTO 3160
 3770 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
 3780 PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
 3790 GOTO 7080
 3800 REM
 3810 REM ===============================================================
 3820 REM
 3830 REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
 3840 FOR I=1 TO K3
 3850     IF K(1,3)<=0 GOTO 3950
 3860     LET A$="   "
 3870     LET Z1=K(I,1)
 3880     LET Z2=K(I,2)
 3890     GOSUB 10550
 3900     GOSUB 10440
 3910     LET K(I,1)=Z1
 3920     LET K(I,2)=Z2
 3930     LET A$="+++"
 3940     GOSUB 10550
 3950 NEXT I
 3960 GOSUB 7610
 3970 LET D1=0
 3980 LET D6=W1
 3990 IF W1<1 GOTO 4050
 4000 LET D6=1
 4010 REM
 4020 REM ===============================================================
 4030 REM
 4040 REM MAKE REPAIRS TO SHIP
 4050 FOR I=1 TO 8
 4060     IF D(I)>=0 GOTO 4160
 4070     LET D(I)=D(I)+6
 4080     IF D(I)<0 GOTO 4160
 4090     IF D1=1 GOTO 4120
 4100     LET D1=1
 4110     PRINT "DAMAGE CONTROL REPORT:"
 4120     PRINT TAB(8);
 4130     LET R1=I
 4140     GOSUB 10780
 4150     PRINT " REPAIR COMPLETED"
 4160 NEXT I
 4170 REM
 4180 REM ===============================================================
 4190 REM
 4200 REM DAMAGE/IMPROVEMENT DURING SOME VES
 4210 IF RND(1)>.2 GOTO 4410
 4220 LET R1=INT(RND(1)*8+1)
 4230 IF RND(1)>=.6 GOTO 4310
 4240 LET D(R1)=D(R1)-(RND(1)*5+1)
 4250 PRINT " "
 4260 PRINT "DAMAGE CONTROL REPORT:";
 4270 GOSUB 10780
 4280 PRINT " DAMAGED"
 4290 PRINT " "
 4300 GOTO 4410
 4310 LET D(R1)=D(R1)+(RND(1)*3+1)
 4320 PRINT " "
 4330 PRINT "DAMAGE CONTROL REPORT:";
 4340 GOSUB 10780
 4350 PRINT " STATE OF REPAIR IMPROVED"
 4360 PRINT " "
 4370 REM
 4380 REM ===============================================================
 4390 REM
 4400 REM BEGIN MOVING STARSHIP **
 4410 LET A$="   "
 4420 LET Z1=INT(S1)
 4430 LET Z2=INT(S2)
 4440 GOSUB 10550
 4450 LET X1=-SIN((C1-1)*P1)
 4460 LET X=S1
 4470 LET Y=S2
 4480 LET X2= COS((C1-1)*P1)
 4490 LET Q4=Q1
 4500 LET Q5=Q2
 4510 FOR I=1 TO N
 4520     LET S1=S1+X1
 4530     LET S2=S2+X2
 4540     IF S1<0.5 GOTO 4800
 4550     IF S1>=8.5 GOTO 4800
 4560     IF S2<0.5 GOTO 4800
 4570     IF S2>=8.5 GOTO 4800
 4580     IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4640
 4590     LET S1=S1-X1
 4600     LET S2=S2-X2
 4610     PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
 4620     PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
 4630     GOTO 4650
 4640 NEXT I
 4650 LET A$="<*>"
 4660 S1=INT(S1+0.5)
 4670 S2=INT(S2+0.5)
 4680 LET Z1=INT(S1)
 4690 LET Z2=INT(S2)
 4700 GOSUB 10550
 4710 GOSUB 5260
 4720 LET T8=1
 4730 IF W1>=1 GOTO 4750
 4740 LET T8=.1*INT(10*W1)
 4750 LET T=T+T8
 4760 IF T>T0+T9 GOTO 7830
 4770 REM SEE IF DOCKED, THEN GET COMMAND
 4780 GOTO 3150
 4790 REM EXCEEDED QUADRANT LIMITS
 4800 LET X=8*Q1+X+N*X1
 4810 LET Y=8*Q2+Y+N*X2
 4820 LET Q1=INT(X/8)
 4830 LET Q2=INT(Y/8)
 4840 LET S1=INT(X-Q1*8)
 4850 LET S2=INT(Y-Q2*8)
 4860 LET X5=0
 4870 IF S1<>0 GOTO 4910
 4880 LET Q1=Q1-1
 4890 LET S1=8
 4900 LET X5=0
 4910 IF S2<>0 GOTO 4950
 4920 LET Q2=Q2-1
 4930 LET S2=8
 4940 LET X5=0
 4950 IF Q1>=1 GOTO 4990
 4960 LET X5=1
 4970 LET Q1=1
 4980 LET S1=1
 4990 IF Q1<=8 GOTO 5030
 5000 LET X5=1
 5010 LET Q1=8
 5020 LET S1=8
 5030 IF Q2>=1 GOTO 5070
 5040 LET X5=1
 5050 LET Q2=1
 5060 LET S2=1
 5070 IF Q2<=8 GOTO 5110
 5080 LET X5=1
 5090 LET Q2=8
 5100 LET S2=8
 5110 IF X5=0 GOTO 5180
 5120 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
 5130 PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
 5140 PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
 5150 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
 5160 PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
 5170 IF T>T0+T9 GOTO 7830
 5180 IF 8*Q1+Q2=8*Q4+Q5 GOTO 4650
 5190 LET T=T+1
 5200 GOSUB 5260
 5210 GOTO 2460
 5220 REM
 5230 REM ===============================================================
 5240 REM
 5250 REM MANEUVER ENERGY S/R ***
 5260 LET E=E-N-10
 5270 IF E>=0 GOTO 5330
 5280 PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
 5290 LET S=S+E
 5300 LET E=0
 5310 IF S>0 GOTO 5330
 5320 LET S=0
 5330 RETURN
 5340 REM
 5350 REM ===============================================================
 5360 REM
 5370 REM L.R. SENSOR SCAN CODE ***
 5380 IF D(3)>=0 GOTO 5410
 5390 PRINT "LONG RANGE SENSORS ARE INOPERABLE"
 5400 GOTO 3160
 5410 PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
 5420 LET O1$="..................."
 5430 PRINT O1$
 5440 FOR I=Q1-1 TO Q1+1
 5450     REM    DIM N(3)
 5460     FOR I1=1 TO 3
 5470 	LET N(I1)=0
 5480     NEXT I1
 5490     FOR J=Q2-1 TO Q2+1
 5500 	IF I<1 GOTO 5580
 5510 	IF I>8 GOTO 5580
 5520 	IF J<1 GOTO 5560
 5530 	IF J>8 GOTO 5560
 5540 	LET N(J-Q2+2)=G(I,J)
 5550 	LET Z(I,J)=G(I,J)
 5560     NEXTJ
 5570     REM   DIM P1$(20)
 5580     LET P1$=": ### : ### : ### :"
 5590     PRINT USING P1$,N(1),N(2),N(3)
 5600     PRINT O1$
 5610 NEXT I
 5620 GOTO 3160
 5630 REM
 5640 REM ===============================================================
 5650 REM
 5660 REM *** PHASER CONTROL CODE BEGINS HERE
 5670 IF K3>0 GOTO 5710
 5680 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
 5690 PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
 5700 GOTO 3160
 5710 IF D(4)>=0 GOTO 5740
 5720 PRINT "PHASERS INOPERATIVE"
 5730 GOTO 3160
 5740 IF D(8)>=0 GOTO 5760
 5750 PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
 5760 PRINT "PHASERS LOCKED ON TARGET;  "
 5770 PRINT "ENERGY AVAILABLE ="E
 5780 PRINT "NUMBER OF UNITS TO FIRE:";
 5790 INPUT X
 5800 IF X<=0 GOTO 3160
 5810 IF E-X<0 GOTO 5770
 5820 LET E=E-X
 5830 GOSUB 7610
 5840 IF D(7)>=0 GOTO 5860
 5850 LET X=X*RND(1)
 5860 LET H1=INT(X/K3)
 5870 FOR I=1 TO 3
 5880     IF K(I,3)<=0 GOTO 6080
 5890     LET H=INT((H1/FND(0))*(RND(1)*2))
 5900     IF H>.15*K(I,3) GOTO 5940
 5910     PRINT "SENSORS SHOW NO DAMAGE"
 5920     PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
 5930     GOTO 6080
 5940     LET K(I,3)=K(I,3)-H
 5950     PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
 5960     IF K(I,3)<=0 GOTO 5990
 5970     PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
 5980     GOTO 6080
 5990     PRINT " *** KLINGON DESTROYED ***"
 6000     LET K3=K3-1
 6010     LET K9=K9-1
 6020     A$="   "
 6030     LET Z1=K(I,1)
 6040     LET Z2=K(I,2)
 6050     GOSUB 10550
 6060     LET G(Q1,Q2)=K3*100+B3*10+S3
 6070     IF K9<=0 GOTO 7980
 6080 NEXT I
 6090 GOTO 3160
 6100 REM
 6110 REM ===============================================================
 6120 REM
 6130 REM PHOTON TORPEDO CODE BEGINS ***
 6140 IF D(5)>=0 GOTO 6170
 6150 PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
 6160 GOTO 3160
 6170 IF P>0 GOTO 6200
 6180 PRINT "ALL PHOTON TORPEDOES EXPENDED"
 6190 GOTO 3160
 6200 PRINT "TORPEDO COURSE (1-9)";
 6210 INPUT C1
 6220 IF C1>=1 GOTO 6250
 6230 PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
 6240 GOTO 3160
 6250 IF C1>9 GOTO 6230
 6260 IF C1<9 GOTO 6290
 6270 IF C1>=9 GOTO 6200
 6280 LET C1=1
 6290 LET X1=-SIN((C1-1)*P1)
 6300 LET X2= COS((C1-1)*P1)
 6310 IF ABS(X1)<ABS(X2) THEN 6360
 6320 M9=ABS(1/X1)
 6330 X1=SGN(X1)
 6340 X2=X2*M9
 6350 GOTO 6390
 6360 M9=ABS(1/X2)
 6370 X2=SGN(X2)
 6380 X1=X1*M9
 6390 LET E=E-2
 6400 LET X=S1
 6410 LET Y=S2
 6420 LET P=P-1
 6430 PRINT "TORPEDO TRACK:"
 6440 LET X=X+X1
 6450 LET Y=Y+X2
 6460 LET X9=INT(X+.5)
 6470 LET Y9=INT(Y+.5)
 6480 IF X9<1 GOTO 7010
 6490 IF X9>=9 GOTO 7010
 6500 IF Y9<1 GOTO 7010
 6510 IF Y9>=9 GOTO 7010
 6520 PRINT "               "X9","Y9
 6530 LET A$="   "
 6540 LET Z1=X9
 6550 LET Z2=Y9
 6560 GOSUB 10840
 6570 IF Z3<>0 GOTO 6440
 6580 LET A$="+++"
 6590 LET Z1=X9
 6600 LET Z2=Y9
 6610 GOSUB 10840
 6620 IF Z3=0 GOTO 6730
 6630 PRINT "*** KLINGON DESTROYED ***"
 6640 LET K3=K3-1
 6650 LET K9=K9-1
 6660 IF K9<=0 GOTO 7980
 6670 FOR I=1 TO 3
 6680     IF X9<>K(I,1) GOTO 6700
 6690     IF Y9=K(I,2) GOTO 6710
 6700 NEXT I
 6710 LET K(I,3)=0
 6720 GOTO 6950
 6730 LET A$=" * "
 6740 LET Z1=X9
 6750 LET Z2=Y9
 6760 GOSUB 10840
 6770 IF Z3=0 GOTO 6800
 6780 PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
 6790 GOTO 7020
 6800 LET A$=">!<"
 6810 LET Z1=X9
 6820 LET Z2=Y9
 6830 GOSUB 10840
 6840 IF Z3=0 GOTO 6200
 6850 PRINT "*** STARBASE DESTROYED ***"
 6860 LET B3=B3-1
 6870 LET B9=B9-1
 6880 IF B9>0 GOTO 6920
 6890 PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
 6900 PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
 6910 GOTO 7880
 6920 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
 6930 PRINT "   COURT MARTIAL!"
 6940 LET D0=0
 6950 LET A$="   "
 6960 LET Z1=X9
 6970 LET Z2=Y9
 6980 GOSUB 10550
 6990 LET G(Q1,Q2)=K3*100+B3*10+S3
 7000 GOTO 7020
 7010 PRINT "TORPEDO MISSED"
 7020 GOSUB 7610
 7030 GOTO 3160
 7040 REM
 7050 REM ===============================================================
 7060 REM
 7070 REM *** SHIELD CONTROL STARTS HERE
 7080 IF D(7)>=0 GOTO 7110
 7090 PRINT "SHIELD CONTROL INOPERABLE"
 7100 GOTO 3160
 7110 PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
 7120 INPUT X
 7130 IF X>=0 GOTO 7170
 7140 IF S<>X GOTO 7170
 7150 PRINT "(SHIELDS UNCHANGED)"
 7160 GOTO 3160
 7170 IF E+S-X<0 GOTO 7110
 7180 LET E=E+S-X
 7190 LET S=X
 7200 PRINT "DEFLECTOR CONTROL ROOM REPORT:"
 7210 PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
 7220 GOTO 3160
 7230 REM
 7240 REM ===============================================================
 7250 REM
 7260 REM *** DAMAGE CONTROL STARTS HERE
 7270 IF D(6)>=0 GOTO 7490
 7280 PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
 7290 IF D0=0 GOTO 3160
 7300 LET D3=0
 7310 FOR I=1 TO 8
 7320     IF D(I)>=0 GOTO 7340
 7330     LET D3=D3+.1
 7340 NEXT I
 7350 IF D3=0 GOTO 3160
 7360 LET D3=D3+D4
 7370 IF D3<1 GOTO 7390
 7380 LET D3=.9
 7390 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
 7400 PRINT "ESTIMATED TIME TO REPAIR: ";
 7410 PRINT USING ".# STARDATES",D3
 7420 PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
 7430 INPUT A$
 7440 IF A$<>"YES" GOTO 3160
 7450 FOR I=1 TO 8
 7460     LET D(I)=0
 7470 NEXT I
 7480 LET T=T+D3+.1
 7490 PRINT " "
 7500 PRINT "DEVICE        STATE OF REPAIR"
 7510 FOR R1=1 TO 8
 7520     GOSUB 10780
 7530     PRINT USING "  -##.##",D(R1)
 7540 NEXT R1
 7550 PRINT " "
 7560 GOTO 7290
 7570 REM
 7580 REM ===============================================================
 7590 REM
 7600 REM "KLINGONS SHOOTING" CODE BEGINS ***
 7610 IF K3<=0 GOTO 7820
 7620 IF D0=0 GOTO 7650
 7630 PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
 7640 GOTO 7820
 7650 FOR I=1 TO 3
 7660     IF K(I,3)<=0 GOTO 7810
 7670     LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
 7680     LET S=S-H
 7690     PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
 7700     IF S<0 GOTO 7820
 7710     PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
 7720     IF H<20 GOTO 7810
 7730     IF RND(1)>.6 GOTO 7810
 7740     IF H/S<=.02 GOTO 7810
 7750     LET D2=H/S+.5*RND(1)
 7760     LET R1=INT(RND(1)*8+1)
 7770     LET D(R1)=D(R1)-D2
 7780     PRINT "DAMAGE CONTROL REPORTS '";
 7790     GOSUB 10780
 7800     PRINT " DAMAGED BY THE HIT!'"
 7810 NEXT I
 7820 RETURN
 7830 PRINT "ITS IS STARDATE "T
 7840 GOTO 7880
 7850 PRINT " "
 7860 PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
 7870 PRINT "IT IS STARDATE "T"."
 7880 PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
 7890 PRINT "THE END OF YOUR MISSION."
 7900 PRINT " "
 7910 PRINT " "
 7920 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
 7930 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
 7940 PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
 7950 INPUT A$
 7960 IF A$="AYE" GOTO 1280
 7970 GOTO 11100
 7980 PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
 7990 PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
 8000 PRINT " "
 8010 PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
 8020 GOTO 7900
 8030 REM
 8040 REM ===============================================================
 8050 REM
 8060 REM S.R. SENSOR SCAN & STARTUP SUBR. ***
 8070 FOR I=S1-1 TO S1+1
 8080     FOR J=S2-1 TO S2+1
 8090 	IF INT(I+.5)<1 GOTO 8180
 8100 	IF INT(I+.5)>8 GOTO 8180
 8110 	IF INT(J+.5)<1 GOTO 8180
 8120 	IF INT(J+.5)>8 GOTO 8180
 8130 	LET A$=">!<"
 8140 	LET Z1=I
 8150 	LET Z2=J
 8160 	GOSUB 10840
 8170 	IF Z3=1 GOTO 8220
 8180     NEXT J
 8190 NEXT I
 8200 LET D0=0
 8210 GOTO 8290
 8220 LET D0=1
 8230 LET C$="DOCKED"
 8240 LET E=3000
 8250 LET P=10
 8260 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
 8270 LET S=0
 8280 GOTO 8360
 8290 IF K3>0 GOTO 8330
 8300 IF E<E0*.1 GOTO 8350
 8310 LET C$=" GREEN"
 8320 GOTO 8360
 8330 C$=" "+CHR$(7)+"*RED*"+CHR$(7)
 8340 GOTO 8360
 8350 LET C$="YELLOW"
 8360 IF D(2)>=0 GOTO 8410
 8370 PRINT " "
 8380 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
 8390 PRINT " "
 8400 GOTO 8900
 8410 LET O1$="--------------------------------"
 8420 PRINT O1$
 8430 LET N5$="####"
 8440 PRINT " ";
 8450 FOR I=1 TO 22 STEP 3
 8460     PRINT MID$(Q$(1),I,3)" ";
 8470 NEXT I
 8480 PRINT " "
 8490 PRINT " ";
 8500 FOR I=1 TO 22 STEP 3
 8510     PRINT MID$(Q$(2),I,3)" ";
 8520 NEXT I
 8530 PRINT "        STARDATE         ";
 8540 PRINT USING "####.#",T
 8550 PRINT " ";
 8560 FOR I=1 TO 22 STEP 3
 8570     PRINT MID$(Q$(3),I,3)" ";
 8580 NEXT I
 8590 PRINT "        CONDITION        ";
 8600 PRINT C$
 8610 PRINT " ";
 8620 FOR I=1 TO 22 STEP 3
 8630     PRINT MID$(Q$(4),I,3)" ";
 8640 NEXT I
 8650 PRINT "        QUADRANT         "Q1","Q2
 8660 PRINT " ";
 8670 FOR I=1 TO 22 STEP 3
 8680     PRINT MID$(Q$(5),I,3)" ";
 8690 NEXT I
 8700 PRINT "        SECTOR           "S1","S2
 8710 PRINT " ";
 8720 FOR I=1 TO 22 STEP 3
 8730     PRINT MID$(Q$(6),I,3)" ";
 8740 NEXT I
 8750 PRINT "        TOTAL ENERGY     ";
 8760 PRINT USING N5$,E+S
 8770 PRINT " ";
 8780 FOR I=1 TO 22 STEP 3
 8790     PRINT MID$(Q$(7),I,3)" ";
 8800 NEXT I
 8810 PRINT "        PHOTON TORPEDOES ";
 8820 PRINT USING N5$,P
 8830 PRINT " ";
 8840 FOR I=1 TO 22 STEP 3
 8850     PRINT MID$(Q$(8),I,3)" ";
 8860 NEXT I
 8870 PRINT "        SHIELDS          ";
 8880 PRINT USING N5$,S
 8890 PRINT O1$
 8900 RETURN
 8910 REM
 8920 REM ===============================================================
 8930 REM
 8940 REM *** LIBARY COMPUTER CODE BEGINS HERE
 8950 IF D(8)>=0 GOTO 8980
 8960 PRINT "COMPUTER DISABLED"
 8970 GOTO 3160
 8980 PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
 8990 INPUT A
 9000 IF A<0 GOTO 3160
 9010 PRINT
 9020 LET H8=1
 9030 IF A=0 GOTO 9270
 9040 IF A>5 GOTO 9150
 9050 REM
 9060 REM ===============================================================
 9070 REM
 9080 ON A GOTO 9690, 9890, 10320, 9970, 9100
 9090 REM  GOTO 9150
 9100 REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
 9110 LET H8=0
 9120 LET G5=1
 9130 PRINT "                      THE GALAXY"
 9140 GOTO 9280
 9150 PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
 9160 PRINT "   0 = CUMULATIVE GALACTIC RECORD"
 9170 PRINT "   1 = STATUS REPORT"
 9180 PRINT "   2 = PHOTON TORPEDO DATA"
 9190 PRINT "   3 = STARBASE NAVIGATION DATA"
 9200 PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
 9210 PRINT "   5 = GALAXY 'REGION NAME' MAP"
 9220 GOTO 8980
 9230 REM
 9240 REM ===============================================================
 9250 REM
 9260 REM *** CUM GALACTIC RECORD CODE BEGINS ***
 9270 PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
 9280 PRINT "      1     2     3     4     5     6     7     8"
 9290 LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
 9300 PRINT O3$
 9310 REM   DIM N1$(2),N2$(8),N$(5)
 9320 FOR I=1 TO 8
 9330     LET N1$="##"
 9340     PRINT USING N1$,I;
 9350     PRINT TAB(3);"|";
 9360     IF H8=0 GOTO 9480
 9370     FOR J=1 TO 8
 9380 	    LET N2$=" ### |"
 9390 	    LET N$=""
 9400 	    IF I<>Q1 GOTO 9440
 9410 	    IF J<>Q2 GOTO 9440
 9420 	    LET N$=CHR$(7)
 9430 	    PRINT N$;
 9440 	    PRINT USING N2$,Z(I,J);
 9450 	    PRINT N$;
 9460     NEXT J
 9470     GOTO 9610
 9480     LET Z4=I
 9490     LET Z5=1
 9500     GOSUB 10960
 9510     LET J0=INT(15-.5*LEN(G2$))
 9520     PRINT  TAB(J0);
 9530     PRINT G2$;
 9540     PRINT TAB(27);"|";
 9550     LET Z5=5
 9560     GOSUB 10960
 9570     LET J0=INT(39-.5*LEN(G2$))
 9580     PRINT  TAB(J0);
 9590     PRINT G2$;
 9600     PRINT TAB(51);"|";
 9610     PRINT
 9620     PRINT O3$
 9630 NEXT I
 9640 GOTO 3160
 9650 REM
 9660 REM ===============================================================
 9670 REM
 9680 REM *** STATUS REPORT CODE BEGINS HERE ***
 9690 PRINT "   STATUS REPORT:"
 9700 LET X$=""
 9710 IF K9=1 GOTO 9730
 9720 LET X$="S"
 9730 PRINT K9" KLINGON"X$" LEFT"
 9740 LET V5=(T0+T9)-T
 9750 PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
 9760 LET X$=""
 9770 IF B9=1 GOTO 9830
 9780 LET X$="S"
 9790 IF B9<>0 GOTO 9830
 9800 PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
 9810 PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
 9820 GOTO 7270
 9830 PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
 9840 GOTO 7270
 9850 REM
 9860 REM ===============================================================
 9870 REM
 9880 REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
 9890 LET H8=0
 9900 FOR I=1 TO 3
 9910     IF K(I,3)<=0 GOTO 10300
 9920     LET W1=K(I,1)
 9930     LET X=K(I,2)
 9940     LET C1=S1
 9950     LET A=S2
 9960     GOTO10040
 9970     PRINT "DIRECTION/DISTANCE CALCULATOR:"
 9980     PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
 9990     PRINT "PLEASE ENTER --"
10000     PRINT "  INITIAL COORDINATES (X,Y)";
10010     INPUT C1,A
10020     PRINT "  FINAL COORDINATES (X,Y)";
10030     INPUT W1,X
10040     LET X=X-A
10050     LET A=C1-W1
10060     IF X<0 GOTO 10170
10070     IF A<0 GOTO 10230
10080     IF X>0 GOTO 10100
10090     IF A=0 GOTO 10190
10100     LET C1=1
10110     IF ABS(A)<=ABS(X) GOTO 10150
10120     LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
10130     PRINT "DIRECTION ="V5
10140     GOTO 10280
10150     PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
10160     GOTO 10280
10170     IF A>0 GOTO 10210
10180     IF X=0 GOTO 10230
10190     LET C1=5
10200     GOTO 10110
10210     LET C1=3
10220     GOTO 10240
10230     LET C1=7
10240     IF ABS(A)>=ABS(X) GOTO 10270
10250     PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
10260     GOTO 10280
10270     PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
10280     PRINT "DISTANCE ="SQR(X^2+A^2)
10290     IF H8=1 GOTO 3160
10300 NEXT I
10310 GOTO 3160
10320 IF B3<>0 GOTO 10350
10330 PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
10340 GOTO 3160
10350 PRINT "FROM ENTERPRISE TO STARBASE:"
10360 LET W1=B4
10370 LET X=B5
10380 GOTO 9940
10390 REM *** END OF LIBRARY-COMPUTER CODE
10400 REM
10410 REM ===============================================================
10420 REM
10430 REM S/R FINDS RANDOM HOLE IN QUADRANT
10440 LET R1=INT(RND(1)*8+1)
10450 LET R2=INT(RND(1)*8+1)
10460 LET A$="   "
10470 LET Z1=R1
10480 LET Z2=R2
10490 GOSUB 10840
10500 IF Z3=0 GOTO 10440
10510 RETURN
10520 REM
10530 REM ===============================================================
10540 REM
10550 REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
10560 Z1 = INT(Z1+.5)
10570 Z2 = INT(Z2+.5)
10580 IF Z1<1 GOTO 10700
10590 IF Z1>8 GOTO 10700
10600 IF Z2<1 GOTO 10700
10610 IF Z2>8 GOTO 10700
10620 DIM Q9(24), A9(3)
10630 CHANGE Q$(Z1) TO Q9
10640 CHANGE A$ TO A9
10650 FOR I8 = 1 TO 3
10660     Q9(3*(Z2-1) + I8) = A9(I8)
10670 NEXT I8
10680 CHANGE Q9 TO Q$(Z1)
10690 GOTO 10740
10700 PRINT
10710 PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
10720 PRINT "     1 <=  Z1,Z2  <=8    "
10730 PRINT
10740 RETURN
10750 REM
10760 REM ===============================================================
10770 REM
10780 REM *** PRINTS DEVICE NAME FROM ARRAY ***
10790 PRINT D$(R1);
10800 RETURN
10810 REM
10820 REM ===============================================================
10830 REM
10840 REM *** STRING COMPARISON IN QUADRANT ARRAY ***
10850 LET Z1=INT(Z1+.5)
10860 LET Z2=INT(Z2+.5)
10870 LET Z3=0
10880 IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10900
10890 Z3 = 1
10900 RETURN
10910 REM
10920 REM ===============================================================
10930 REM
10940 REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
10950 REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
10960 LET L2=2
10970 IF Z5>=5 GOTO 10990
10980 LET L2=1
10990 LET L3=2*(Z4-1)+L2
11000 LET G2$=G1$(L3)
11010 IF G5=1 GOTO 11090
11020 LET L3=Z5
11030 IF Z5<=4 GOTO 11050
11040 LET L3=Z5-4
11050 LET G3$="IV"
11060 IF L3=4 GOTO 11080
11070 LET G3$=MID$(G4$,1,L3)
11080 G2$=G2$+" "+G3$
11090 RETURN 
11100 STOP
11111 REM Gosub target.
11112 REM This segment was originally from file STINST.BAS and was included with 
11113 REM a CHAIN command./ASA Jul 27,2009
11115 PRINT
11120 REM INSTRUCTIONS FOR "STREK" GAME
11130 REM VERSION "STINST2" 12/8/74
11140 FOR I=1 TO 9
11150     ON I GOTO 11350, 11470, 11650, 11750, 11830, 11890, 11970, 12020, 12070
11160     PRINT
11170     PRINT "<TO CONTINUE, HIT 'RETURN'>";
11180     INPUT A$
11190     PRINT
11200 NEXT I
11210 PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
11220 PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
11230 PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
11240 PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
11250 PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
11260 PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
11270 PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
11280 PRINT "      WILL BE ABORTED."
11290 PRINT
11300 PRINT "HIT <CAR RET> TO CONTINUE ";
11310 INPUT A$
11330 RETURN
11340 REM *** EXIT HERE ***
11350 PRINT
11360 PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
11370 PRINT 
11380 PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
11390 PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
11400 PRINT
11410 PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
11420 PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
11430 PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
11440 PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
11450 PRINT
11460 GOTO 11160
11470 PRINT
11480 PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
11490 PRINT "CAPTAIN OF THE STARSHIP:"
11500 PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
11510 PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
11520 PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
11530 PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
11540 PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
11550 PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
11560 PRINT "                                             . . ."
11570 PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
11580 PRINT "  ITSELF IS EQUIVALENT TO 1.0."
11590 PRINT "                                            COURSE  "
11600 PRINT " ONE WARP FACTOR IS THE SIZE OF "
11610 PRINT " ONE QUADRANT.  THEREFORE, TO GET"
11620 PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
11630 PRINT " USE COURSE 3, WARP FACTOR 1."
11640 GOTO 11160
11650 PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
11660 PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
11670 PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
11680 PRINT "		<*> = YOUR STARSHIP'S POSITION"
11690 PRINT "		+++ = KLINGON BATTLE CRUISER"
11700 PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
11710 PRINT "		 *  = STAR"
11720 PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
11730 PRINT
11740 GOTO 11160
11750 PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
11760 PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
11770 PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
11780 PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
11790 PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
11800 PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
11810 PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
11820 GOTO 11160
11830 PRINT "'PHA' COMMAND = PHASER CONTROL"
11840 PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
11850 PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
11860 PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
11870 PRINT "  PHASERS, TOO!)"
11880 GOTO 11160
11890 PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
11900 PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
11910 PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
11920 PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
11930 PRINT "  HIS PHASER FIRE."
11940 PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
11950 PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
11960 GOTO 11160
11970 PRINT "'SHE' COMMAND = SHIELD CONTROL"
11980 PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
11990 PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
12000 PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
12010 GOTO 11160
12020 PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
12030 PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
12040 PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
12050 PRINT "  DAMAGED."
12060 GOTO 11160
12070 PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
12080 PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
12090 PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
12100 PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
12110 PRINT "     LONG RANGE SENSOR SCANS."
12120 PRINT "  OPTION 1 = STATUS REPORT"
12130 PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
12140 PRINT "     REMAINING IN THE GAME."
12150 PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
12160 PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
12170 PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
12180 PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
12190 PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
12200 PRINT "     WITHIN YOUR QUADRANT"
12210 PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
12220 PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
12230 PRINT "     DIRECTION/DISTANCE CALCULATIONS."
12240 PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
12250 PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
12260 PRINT "     REGIONS REFERRED TO IN THE GAME."
12270 GOTO 11160
12280 END