/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/strek2/basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55b8aadb7d00 ---------A   01000 REM (VERSION "STREK7", 1/12/75 RCL)
    0x55b8aadb7da0 ---------A   01010 REM
    0x55b8aadb7e20 ---------A   01020 REM
    0x55b8aadb7f10 ---------A   01030 REM ***         *** STAR TREK ***       ***
    0x55b8aadb7ff0 ---------A   01040 REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x55b8aadb8100 ---------A   01050 REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x55b8aadb81e0 ---------A   01060 REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x55b8aadb82c0 ---------A   01070 REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x55b8aadb83a0 ---------A   01080 REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x55b8aadb84f0 ---------A   01090 REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x55b8aadb85b0 ---------A   01100 REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x55b8aadb8640 ---------A   01110 REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x55b8aadb86b0 ---------A   01120 REM *** ADDRESS TO:   R.C.LEEDOM
    0x55b8aadb8790 ---------A   01130 REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x55b8aadb8860 ---------A   01140 REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x55b8aadb88e0 ---------A   01150 RANDOMIZE
    0x55b8aadb8bb0 ---------A   01160 PRINT  TAB(15);"* * * STAR TREK * * *"
    0x55b8aadc4580 ---------A   01170 PRINT
    0x55b8aadc46b0 ---------A   01180 PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x55b8aadc4810 ---------A   01190 INPUT A$
    0x55b8aadc49d0 ---------A   01200 IF A$<>"YES" GOTO 1280
    0x55b8aadc4b60 ---------A   01210 PRINT "PLEASE WAIT  . . .";
    0x55b8aadc4bd0 ---------A   01220 GOSUB 11111
    0x55b8aadc4c30 ---------A   01240 REM
    0x55b8aadc4d20 ---------A   01250 REM ===============================================================
    0x55b8aadc4da0 ---------A   01260 REM
    0x55b8aadc4e40 ---------A   01270 REM  PROGRAM BEGINS HERE .....
    0x55b8aadc5040 ---------A T 01280 DIM Q$(8)
    0x55b8aadc52d0 ---------A   01290 FOR I = 1 TO 8
    0x55b8aadc5590 ---------A   01300     Q$(I) = SPACE$(24)
    0x55b8aadc5640 ---------A   01310 NEXT I
    0x55b8aadc60f0 ---------A   01320 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x55b8aadc6730 ---------A   01330 LET T=INT(RND(1)*20+20)*100
    0x55b8aadc6c10 ---------A   01340 LET P1=3.14159/4
    0x55b8aadc6dc0 ---------A   01350 LET T0=T
    0x55b8aadc6fb0 ---------A   01360 LET T9=30
    0x55b8aadc71a0 ---------A   01370 LET D0=0
    0x55b8aadc7390 ---------A   01380 LET E0=3000
    0x55b8aadc7540 ---------A   01390 LET E=E0
    0x55b8aadc7730 ---------A   01400 LET P=10
    0x55b8aadc78e0 ---------A   01410 LET P0=P
    0x55b8aadc7ad0 ---------A   01420 LET S9=200
    0x55b8aadc7ce0 ---------A   01430 LET S=0
    0x55b8aadc8770 ---------A   01440 DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x55b8aadc8800 ---------A   01450 REM
    0x55b8aadc88f0 ---------A   01460 REM ===============================================================
    0x55b8aadc8970 ---------A   01470 REM
    0x55b8aadc8a20 ---------A   01480 REM INITIALIZE INTERPRISE'S POSITION
    0x55b8aadc8ec0 ---------A   01490 LET Q1=INT(RND(1)*8+1)
    0x55b8aadc9340 ---------A   01500 LET Q2=INT(RND(1)*8+1)
    0x55b8aadc9740 ---------A   01510 LET S1=INT(RND(1)*8+1)
    0x55b8aadc9b30 ---------A   01520 LET S2=INT(RND(1)*8+1)
    0x55b8aadc9c60 ---------A   01530 MAT C=ZER
    0x55b8aadca000 ---------A   01540 LET C(4,1)=-1
    0x55b8aadca2b0 ---------A   01550 LET C(3,1)=-1
    0x55b8aadca560 ---------A   01560 LET C(2,1)=-1
    0x55b8aadca810 ---------A   01570 LET C(4,2)=-1
    0x55b8aadcaac0 ---------A   01580 LET C(5,2)=-1
    0x55b8aadcad70 ---------A   01590 LET C(6,2)=-1
    0x55b8aadcb020 ---------A   01600 LET C(1,2)=1
    0x55b8aadcb2d0 ---------A   01610 LET C(2,2)=1
    0x55b8aadcb580 ---------A   01620 LET C(6,1)=1
    0x55b8aadcb830 ---------A   01630 LET C(7,1)=1
    0x55b8aadcbae0 ---------A   01640 LET C(8,1)=1
    0x55b8aadcbd90 ---------A   01650 LET C(8,2)=1
    0x55b8aadcc450 ---------A   01660 LET C(9,2)=1
    0x55b8aadcc640 ---------A   01670 DIM D(8)
    0x55b8aadcc840 ---------A   01680 FOR I=1 TO 8
    0x55b8aadcca20 ---------A   01690     LET D(I)=0
    0x55b8aadccad0 ---------A   01700 NEXT I
    0x55b8aadcccd0 ---------A   01710 DIM D$(8)
    0x55b8aadccd60 ---------A   01720 RESTORE
    0x55b8aadcd5f0 ---------A   01730 READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x55b8aadcd980 ---------A   01740 DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x55b8aadcdcf0 ---------A   01750 DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x55b8aadcdf00 ---------A   01760 LET G4$="III"
    0x55b8aadce0f0 ---------A   01770 DIM G1$(16)
    0x55b8aadce2f0 ---------A   01780 FOR I=1 TO 16
    0x55b8aadce430 ---------A   01790     READ G1$(I)
    0x55b8aadce4d0 ---------A   01800 NEXT I
    0x55b8aadceb00 ---------A   01810 DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x55b8aadcef50 ---------A   01820 DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x55b8aadcf2c0 ---------A   01830 DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x55b8aadcf4b0 ---------A   01840 LET B9=0
    0x55b8aadcf6b0 ---------A   01850 LET K9=0
    0x55b8aadcf8c0 ---------A   01860 LET A1$="NSLPTSDCX"
    0x55b8aadcf930 ---------A   01870 REM
    0x55b8aadcfa20 ---------A   01880 REM ===============================================================
    0x55b8aadcfaa0 ---------A   01890 REM
    0x55b8aadcfb50 ---------A   01900 REM  SET UP WHAT EXISTS IN GALAXY ...
    0x55b8aadcfd70 ---------A   01910 FOR I=1 TO 8
    0x55b8aadd0010 ---------A   01920     FOR J=1 TO 8
    0x55b8aadd0280 ---------A   01930 	LET R1=RND(1)
    0x55b8aadd0410 ---------A   01940 	IF R1>.98 GOTO 1990
    0x55b8aadd05e0 ---------A   01950 	IF R1>.95 GOTO 2020
    0x55b8aadd07b0 ---------A   01960 	IF R1>.8  GOTO 2050
    0x55b8aadd09d0 ---------A   01970 	LET K3=0
    0x55b8aadd0a40 ---------A   01980 	GOTO 2070
    0x55b8aadd0ba0 ---------A T 01990 	LET K3=3
    0x55b8aadd0db0 ---------A   02000 	LET K9=K9+3
    0x55b8aadd0e20 ---------A   02010 	GOTO 2070
    0x55b8aadd0f80 ---------A T 02020 	LET K3=2
    0x55b8aadd1190 ---------A   02030 	LET K9=K9+2
    0x55b8aadd1200 ---------A   02040 	GOTO 2070
    0x55b8aadd1360 ---------A T 02050 	LET K3=1
    0x55b8aadd1570 ---------A   02060 	LET K9=K9+1
    0x55b8aadd1750 ---------A T 02070 	LET R1=RND(1)
    0x55b8aadd18e0 ---------A   02080 	IF R1>.96 GOTO 2110
    0x55b8aadd1b00 ---------A   02090 	LET B3=0
    0x55b8aadd1b70 ---------A   02100 	GOTO 2130
    0x55b8aadd1cd0 ---------A T 02110 	LET B3=1
    0x55b8aadd1ef0 ---------A   02120 	LET B9=B9+1
    0x55b8aadd2370 ---------A T 02130 	LET S3=INT(RND(1)*8+1)
    0x55b8aadd2880 ---------A   02140 	LET G(I,J)=K3*100+B3*10+S3
    0x55b8aadd2910 ---------A   02150 	REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x55b8aadd2b50 ---------A   02160 	LET Z(I,J)=0
    0x55b8aadd2c00 ---------A   02170     NEXT J
    0x55b8aadd2cc0 ---------A   02180 NEXT I
    0x55b8aadd2e80 ---------A   02190 LET K7=K9
    0x55b8aadd3090 ---------A   02200 LET X$=""
    0x55b8aadd32b0 ---------A   02210 LET X0$=" IS "
    0x55b8aadd3440 ---------A   02220 IF B9<>0 GOTO 2280
    0x55b8aadd35f0 ---------A   02230 LET B9=1
    0x55b8aadd38c0 ---------A   02240 IF G(6,3)>=200 GOTO 2270
    0x55b8aadd3d90 ---------A   02250 LET G(6,3)=G(6,3)+100
    0x55b8aadd3fb0 ---------A   02260 LET K9=K9+1
    0x55b8aadd4440 ---------A T 02270 LET G(6,3)=G(6,3)+10
    0x55b8aadd45d0 ---------A T 02280 IF B9=1 GOTO 2330
    0x55b8aadd4790 ---------A   02290 LET X$="S"
    0x55b8aadd5130 ---------A   02300 LET X0$=" ARE "
    0x55b8aadd5260 ---------A   02310 PRINT " "
    0x55b8aadd53b0 ---------A   02320 PRINT " "
    0x55b8aadd54f0 ---------A T 02330 PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x55b8aadd5650 ---------A   02340 PRINT " "
    0x55b8aadd5930 ---------A   02350 PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x55b8aadd5ac0 ---------A   02360 PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x55b8aadd6010 ---------A   02370 PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x55b8aadd6420 ---------A   02380 PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x55b8aadd6580 ---------A   02390 PRINT " "
    0x55b8aadd66f0 ---------A   02400 PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x55b8aadd67c0 ---------A   02410 INPUT A$
    0x55b8aadd6840 ---------A   02420 REM
    0x55b8aadd6930 ---------A   02430 REM ===============================================================
    0x55b8aadd69b0 ---------A   02440 REM
    0x55b8aadd6a70 ---------A   02450 REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x55b8aadd6c30 ---------A T 02460 LET Z4=Q1
    0x55b8aadd6de0 ---------A   02470 LET Z5=Q2
    0x55b8aadd6f50 ---------A   02480 LET K3=0
    0x55b8aadd70c0 ---------A   02490 LET B3=0
    0x55b8aadd7230 ---------A   02500 LET S3=0
    0x55b8aadd7420 ---------A   02510 LET G5=0
    0x55b8aadd7750 ---------A   02520 LET D4=.5*RND(1)
    0x55b8aadd79f0 ---------A   02530 FOR I7 = 1 TO 8
    0x55b8aadd7c30 ---------A   02540     Q$(I7)=SPACE$(24)
    0x55b8aadd7ce0 ---------A   02550 NEXT I7
    0x55b8aadd7e80 ---------A   02560 IF Q1<1 GOTO 2770
    0x55b8aadd8040 ---------A   02570 IF Q1>8 GOTO 2770
    0x55b8aadd8200 ---------A   02580 IF Q2<1 GOTO 2770
    0x55b8aadd83c0 ---------A   02590 IF Q2>8 GOTO 2770
    0x55b8aadd8460 ---------A   02600 GOSUB 10960
    0x55b8aadd8590 ---------A   02610 PRINT " "
    0x55b8aadd86e0 ---------A   02620 IF T<>T0 GOTO 2660
    0x55b8aadd88b0 ---------A   02630 PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x55b8aadd8bd0 ---------A   02640 PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x55b8aadd8c60 ---------A   02650 GOTO 2670
    0x55b8aadd8ee0 ---------A T 02660 PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x55b8aadd9020 ---------A T 02670 PRINT " "
    0x55b8aadd9370 ---------A   02680 LET X=G(Q1,Q2)*.01
    0x55b8aadd9510 ---------A   02690 LET K3=INT(X)
    0x55b8aadd9880 ---------A   02700 LET B3=INT((X-K3)*10)
    0x55b8aadd9df0 ---------A   02710 LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x55b8aadd9f80 ---------A   02720 IF K3=0 GOTO 2760
    0x55b8aadda120 ---------A   02730 PRINT "COMBAT AREA      CONDITION RED"
    0x55b8aadda2b0 ---------A   02740 IF S>200 GOTO 2760
    0x55b8aadda440 ---------A   02750 PRINT "   SHIELDS DANGEROUSLY LOW"
    0x55b8aadda570 ---------A T 02760 MAT K=ZER
    0x55b8aadda870 ---------A T 02770 FOR I=1 TO 3
    0x55b8aaddaaf0 ---------A   02780     LET K(I,3)=0
    0x55b8aaddaba0 ---------A   02790 NEXT I
    0x55b8aaddac20 ---------A   02800 REM
    0x55b8aaddad10 ---------A   02810 REM ===============================================================
    0x55b8aaddad90 ---------A   02820 REM
    0x55b8aaddae70 ---------A   02830 REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x55b8aaddaf30 ---------A   02840 REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x55b8aaddb0d0 ---------A   02850 LET A$="<*>"
    0x55b8aaddb280 ---------A   02860 LET Z1=S1
    0x55b8aaddb430 ---------A   02870 LET Z2=S2
    0x55b8aaddb4a0 ---------A   02880 GOSUB 10550
    0x55b8aaddb660 ---------A   02890 FOR I=1 TO K3
    0x55b8aaddb6e0 ---------A   02900     GOSUB 10440
    0x55b8aaddb860 ---------A   02910     LET A$="+++"
    0x55b8aaddb990 ---------A   02920     LET Z1=R1
    0x55b8aaddbb40 ---------A   02930     LET Z2=R2
    0x55b8aaddbbb0 ---------A   02940     GOSUB 10550
    0x55b8aaddbdd0 ---------A   02950     LET K(I,1)=R1
    0x55b8aaddc010 ---------A   02960     LET K(I,2)=R2
    0x55b8aaddc280 ---------A   02970     LET K(I,3)=200
    0x55b8aaddc330 ---------A   02980 NEXT I
    0x55b8aaddc510 ---------A   02990 FOR I=1 TO B3
    0x55b8aaddc590 ---------A   03000     GOSUB 10440
    0x55b8aaddc710 ---------A   03010     LET A$=">!<"
    0x55b8aaddc840 ---------A   03020     LET Z1=R1
    0x55b8aaddc970 ---------A   03030     LET Z2=R2
    0x55b8aaddc9e0 ---------A   03040     GOSUB 10550
    0x55b8aaddcb80 ---------A   03050     LET B4=Z1
    0x55b8aaddcd30 ---------A   03060     LET B5=Z2
    0x55b8aaddcde0 ---------A   03070 NEXT I
    0x55b8aaddcfc0 ---------A   03080 FOR I=1 TO S3
    0x55b8aaddd040 ---------A   03090     GOSUB 10440
    0x55b8aaddd1c0 ---------A   03100     LET A$=" * "
    0x55b8aaddd2f0 ---------A   03110     LET Z1=R1
    0x55b8aaddd420 ---------A   03120     LET Z2=R2
    0x55b8aaddd490 ---------A   03130     GOSUB 10550
    0x55b8aaddd530 ---------A   03140 NEXT I
    0x55b8aaddd5c0 ---------A T 03150 GOSUB 8070
    0x55b8aaddd7e0 ---------A T 03160 IF S+E<=10 GOTO 3190
    0x55b8aaddd9a0 ---------A   03170 IF E>10 GOTO 3230
    0x55b8aadddc10 ---------A   03180 IF D(7)>=0 GOTO 3230
    0x55b8aadde1c0 ---------A T 03190 PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x55b8aadde360 ---------A   03200 PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x55b8aadde4c0 ---------A   03210 PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x55b8aadde530 ---------A   03220 GOTO 7850
    0x55b8aadde670 ---------A T 03230 PRINT "COMMAND";
    0x55b8aadde740 ---------A   03240 INPUT A$
    0x55b8aadde980 ---------A   03250 FOR I=1 TO 9
    0x55b8aaddee60 ---------A   03260     IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3320
    0x55b8aaddf030 ---------A   03270     IF I<>2 GOTO 3310
    0x55b8aaddf2e0 ---------A   03280     IF LEN(A$)<2 GOTO 3310
    0x55b8aaddf670 ---------A   03290     IF MID$(A$,2,1)="R" GOTO 3310
    0x55b8aaddf850 ---------A   03300     LET I=6
    0x55b8aaddfec0 ---------A T 03310     ON I GOTO 3490, 3150, 5380, 5670, 6140, 7080, 7270, 8950, 7880
    0x55b8aaddff70 ---------A T 03320 NEXT I
    0x55b8aade00f0 ---------A   03330 PRINT "ENTER ONE OF THE FOLLOWING:"
    0x55b8aade0240 ---------A   03340 PRINT "  NAV (TO SET COURSE)"
    0x55b8aade03a0 ---------A   03350 PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x55b8aade04f0 ---------A   03360 PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x55b8aade0650 ---------A   03370 PRINT "  PHA (TO FIRE PHASERS)"
    0x55b8aade07b0 ---------A   03380 PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x55b8aade0910 ---------A   03390 PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x55b8aade0a70 ---------A   03400 PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x55b8aade0bd0 ---------A   03410 PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x55b8aade0d10 ---------A   03420 PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x55b8aade0e40 ---------A   03430 PRINT " "
    0x55b8aade0eb0 ---------A   03440 GOTO 3160
    0x55b8aade0f10 ---------A   03450 REM
    0x55b8aade1000 ---------A   03460 REM ===============================================================
    0x55b8aade1080 ---------A   03470 REM
    0x55b8aade1120 ---------A   03480 REM  COURSE CONTROL BEGINS HERE
    0x55b8aade1290 ---------A T 03490 PRINT "COURSE(1-9)";
    0x55b8aade13f0 ---------A   03500 INPUT C1
    0x55b8aade1590 ---------A   03510 IF C1>=1 GOTO 3540
    0x55b8aade1740 ---------A T 03520 PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x55b8aade17b0 ---------A   03530 GOTO 3160
    0x55b8aade1930 ---------A T 03540 IF C1<9 GOTO 3570
    0x55b8aade1af0 ---------A   03550 IF C1>9 GOTO 3520
    0x55b8aade1ba0 ---------A   03560 GOTO 3520
    0x55b8aade1ce0 ---------A T 03570 PRINT "WARP FACTOR (0-8)";
    0x55b8aadd48f0 ---------A   03580 INPUT W1
    0x55b8aadd4a90 ---------A   03590 IF W1 > 0 GOTO 3630
    0x55b8aadd4c50 ---------A   03600 PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x55b8aadd4ee0 ---------A   03610 PRINT "          SET WARP "W1" !"
    0x55b8aadd4f60 ---------A   03620 GOTO 3160
    0x55b8aade2e60 ---------A T 03630 IF W1<=8 GOTO 3670
    0x55b8aade2ff0 ---------A   03640 PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x55b8aade3280 ---------A   03650 PRINT "         TAKE WARP "W1"!/"
    0x55b8aade3300 ---------A   03660 GOTO 3160
    0x55b8aade3520 ---------A T 03670 IF D(1)>=0 GOTO 3710
    0x55b8aade36f0 ---------A   03680 IF W1<=0.2 GOTO 3710
    0x55b8aade38a0 ---------A   03690 PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x55b8aade3920 ---------A   03700 GOTO 3490
    0x55b8aade3cf0 ---------A T 03710 LET N=INT(W1*8+.5)
    0x55b8aade3f20 ---------A   03720 IF E-N>=0 GOTO 3840
    0x55b8aade40f0 ---------A   03730 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x55b8aade43a0 ---------A   03740 PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x55b8aade4590 ---------A   03750 IF S<N-E GOTO 3160
    0x55b8aade4800 ---------A   03760 IF D(7)<0 GOTO 3160
    0x55b8aade4b30 ---------A   03770 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x55b8aade4c80 ---------A   03780 PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x55b8aade4cf0 ---------A   03790 GOTO 7080
    0x55b8aade4d50 ---------A   03800 REM
    0x55b8aade4e40 ---------A   03810 REM ===============================================================
    0x55b8aade4ec0 ---------A   03820 REM
    0x55b8aade4f80 ---------A   03830 REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x55b8aade5170 ---------A T 03840 FOR I=1 TO K3
    0x55b8aade5450 ---------A   03850     IF K(1,3)<=0 GOTO 3950
    0x55b8aade5610 ---------A   03860     LET A$="   "
    0x55b8aade5840 ---------A   03870     LET Z1=K(I,1)
    0x55b8aade5a70 ---------A   03880     LET Z2=K(I,2)
    0x55b8aade5ae0 ---------A   03890     GOSUB 10550
    0x55b8aade5b40 ---------A   03900     GOSUB 10440
    0x55b8aade5d60 ---------A   03910     LET K(I,1)=Z1
    0x55b8aade5f90 ---------A   03920     LET K(I,2)=Z2
    0x55b8aade6120 ---------A   03930     LET A$="+++"
    0x55b8aade6190 ---------A   03940     GOSUB 10550
    0x55b8aade6230 ---------A T 03950 NEXT I
    0x55b8aade62b0 ---------A   03960 GOSUB 7610
    0x55b8aade6490 ---------A   03970 LET D1=0
    0x55b8aade6640 ---------A   03980 LET D6=W1
    0x55b8aade67d0 ---------A   03990 IF W1<1 GOTO 4050
    0x55b8aade6970 ---------A   04000 LET D6=1
    0x55b8aade69e0 ---------A   04010 REM
    0x55b8aade6ad0 ---------A   04020 REM ===============================================================
    0x55b8aade6b50 ---------A   04030 REM
    0x55b8aade6bf0 ---------A   04040 REM MAKE REPAIRS TO SHIP
    0x55b8aade6e20 ---------A T 04050 FOR I=1 TO 8
    0x55b8aade7020 ---------A   04060     IF D(I)>=0 GOTO 4160
    0x55b8aade7340 ---------A   04070     LET D(I)=D(I)+6
    0x55b8aade7530 ---------A   04080     IF D(I)<0 GOTO 4160
    0x55b8aade7700 ---------A   04090     IF D1=1 GOTO 4120
    0x55b8aade78c0 ---------A   04100     LET D1=1
    0x55b8aade7a00 ---------A   04110     PRINT "DAMAGE CONTROL REPORT:"
    0x55b8aade7b90 ---------A T 04120     PRINT TAB(8);
    0x55b8aade7cc0 ---------A   04130     LET R1=I
    0x55b8aade7d40 ---------A   04140     GOSUB 10780
    0x55b8aade7e60 ---------A   04150     PRINT " REPAIR COMPLETED"
    0x55b8aade7f10 ---------A T 04160 NEXT I
    0x55b8aade7f90 ---------A   04170 REM
    0x55b8aade8080 ---------A   04180 REM ===============================================================
    0x55b8aade8100 ---------A   04190 REM
    0x55b8aade81b0 ---------A   04200 REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x55b8aade8400 ---------A   04210 IF RND(1)>.2 GOTO 4410
    0x55b8aade8840 ---------A   04220 LET R1=INT(RND(1)*8+1)
    0x55b8aade8a70 ---------A   04230 IF RND(1)>=.6 GOTO 4310
    0x55b8aade8fe0 ---------A   04240 LET D(R1)=D(R1)-(RND(1)*5+1)
    0x55b8aade9120 ---------A   04250 PRINT " "
    0x55b8aade9280 ---------A   04260 PRINT "DAMAGE CONTROL REPORT:";
    0x55b8aade92f0 ---------A   04270 GOSUB 10780
    0x55b8aade9410 ---------A   04280 PRINT " DAMAGED"
    0x55b8aade9540 ---------A   04290 PRINT " "
    0x55b8aade95c0 ---------A   04300 GOTO 4410
    0x55b8aade9ae0 ---------A T 04310 LET D(R1)=D(R1)+(RND(1)*3+1)
    0x55b8aade9c20 ---------A   04320 PRINT " "
    0x55b8aade9d80 ---------A   04330 PRINT "DAMAGE CONTROL REPORT:";
    0x55b8aade9e00 ---------A   04340 GOSUB 10780
    0x55b8aade9f30 ---------A   04350 PRINT " STATE OF REPAIR IMPROVED"
    0x55b8aadea060 ---------A   04360 PRINT " "
    0x55b8aadea0d0 ---------A   04370 REM
    0x55b8aadea1c0 ---------A   04380 REM ===============================================================
    0x55b8aadea240 ---------A   04390 REM
    0x55b8aadea2e0 ---------A   04400 REM BEGIN MOVING STARSHIP **
    0x55b8aadea480 ---------A T 04410 LET A$="   "
    0x55b8aadea610 ---------A   04420 LET Z1=INT(S1)
    0x55b8aadea7a0 ---------A   04430 LET Z2=INT(S2)
    0x55b8aadea820 ---------A   04440 GOSUB 10550
    0x55b8aadeac60 ---------A   04450 LET X1=-SIN((C1-1)*P1)
    0x55b8aadead90 ---------A   04460 LET X=S1
    0x55b8aadeaf50 ---------A   04470 LET Y=S2
    0x55b8aadeb3a0 ---------A   04480 LET X2= COS((C1-1)*P1)
    0x55b8aadeb550 ---------A   04490 LET Q4=Q1
    0x55b8aadeb700 ---------A   04500 LET Q5=Q2
    0x55b8aadeb8d0 ---------A   04510 FOR I=1 TO N
    0x55b8aadebab0 ---------A   04520     LET S1=S1+X1
    0x55b8aadebc90 ---------A   04530     LET S2=S2+X2
    0x55b8aadebe20 ---------A   04540     IF S1<0.5 GOTO 4800
    0x55b8aadebff0 ---------A   04550     IF S1>=8.5 GOTO 4800
    0x55b8aadec1c0 ---------A   04560     IF S2<0.5 GOTO 4800
    0x55b8aadec390 ---------A   04570     IF S2>=8.5 GOTO 4800
    0x55b8aadecbe0 ---------A   04580     IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4640
    0x55b8aadecde0 ---------A   04590     LET S1=S1-X1
    0x55b8aadecfe0 ---------A   04600     LET S2=S2-X2
    0x55b8aaded320 ---------A   04610     PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x55b8aaded700 ---------A   04620     PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x55b8aaded770 ---------A   04630     GOTO 4650
    0x55b8aaded810 ---------A T 04640 NEXT I
    0x55b8aaded9b0 ---------A T 04650 LET A$="<*>"
    0x55b8aadedc20 ---------A   04660 S1=INT(S1+0.5)
    0x55b8aadede90 ---------A   04670 S2=INT(S2+0.5)
    0x55b8aadee020 ---------A   04680 LET Z1=INT(S1)
    0x55b8aadee1b0 ---------A   04690 LET Z2=INT(S2)
    0x55b8aadee220 ---------A   04700 GOSUB 10550
    0x55b8aadee280 ---------A   04710 GOSUB 5260
    0x55b8aadee470 ---------A   04720 LET T8=1
    0x55b8aadee600 ---------A   04730 IF W1>=1 GOTO 4750
    0x55b8aadee990 ---------A   04740 LET T8=.1*INT(10*W1)
    0x55b8aadeeb70 ---------A T 04750 LET T=T+T8
    0x55b8aadeed60 ---------A   04760 IF T>T0+T9 GOTO 7830
    0x55b8aadeee30 ---------A   04770 REM SEE IF DOCKED, THEN GET COMMAND
    0x55b8aadeeec0 ---------A   04780 GOTO 3150
    0x55b8aadeef30 ---------A   04790 REM EXCEEDED QUADRANT LIMITS
    0x55b8aadef330 ---------A T 04800 LET X=8*Q1+X+N*X1
    0x55b8aadef720 ---------A   04810 LET Y=8*Q2+Y+N*X2
    0x55b8aadef990 ---------A   04820 LET Q1=INT(X/8)
    0x55b8aadefc10 ---------A   04830 LET Q2=INT(Y/8)
    0x55b8aadeff30 ---------A   04840 LET S1=INT(X-Q1*8)
    0x55b8aadf0240 ---------A   04850 LET S2=INT(Y-Q2*8)
    0x55b8aadf0440 ---------A   04860 LET X5=0
    0x55b8aadf05d0 ---------A   04870 IF S1<>0 GOTO 4910
    0x55b8aadf0810 ---------A   04880 LET Q1=Q1-1
    0x55b8aadf0980 ---------A   04890 LET S1=8
    0x55b8aadf0b00 ---------A   04900 LET X5=0
    0x55b8aadf0c90 ---------A T 04910 IF S2<>0 GOTO 4950
    0x55b8aadf0ed0 ---------A   04920 LET Q2=Q2-1
    0x55b8aadf1040 ---------A   04930 LET S2=8
    0x55b8aadf11c0 ---------A   04940 LET X5=0
    0x55b8aadf1350 ---------A T 04950 IF Q1>=1 GOTO 4990
    0x55b8aadf14f0 ---------A   04960 LET X5=1
    0x55b8aadf1660 ---------A   04970 LET Q1=1
    0x55b8aadf17e0 ---------A   04980 LET S1=1
    0x55b8aadf1970 ---------A T 04990 IF Q1<=8 GOTO 5030
    0x55b8aadf1b10 ---------A   05000 LET X5=1
    0x55b8aadf1c80 ---------A   05010 LET Q1=8
    0x55b8aadf1e00 ---------A   05020 LET S1=8
    0x55b8aadf1f90 ---------A T 05030 IF Q2>=1 GOTO 5070
    0x55b8aadf2130 ---------A   05040 LET X5=1
    0x55b8aadf22a0 ---------A   05050 LET Q2=1
    0x55b8aadf2420 ---------A   05060 LET S2=1
    0x55b8aadf25b0 ---------A T 05070 IF Q2<=8 GOTO 5110
    0x55b8aadf2750 ---------A   05080 LET X5=1
    0x55b8aadf28c0 ---------A   05090 LET Q2=8
    0x55b8aadf2a30 ---------A   05100 LET S2=8
    0x55b8aadf2bc0 ---------A T 05110 IF X5=0 GOTO 5180
    0x55b8aadf2da0 ---------A   05120 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x55b8aadf2f30 ---------A   05130 PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x55b8aadf30b0 ---------A   05140 PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x55b8aadf3230 ---------A   05150 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x55b8aadf38f0 ---------A   05160 PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x55b8aadf3ae0 ---------A   05170 IF T>T0+T9 GOTO 7830
    0x55b8aadf3f70 ---------A T 05180 IF 8*Q1+Q2=8*Q4+Q5 GOTO 4650
    0x55b8aadf41b0 ---------A   05190 LET T=T+1
    0x55b8aadf4220 ---------A   05200 GOSUB 5260
    0x55b8aadf4280 ---------A   05210 GOTO 2460
    0x55b8aadf42e0 ---------B   05220 REM
    0x55b8aadf43d0 ---------B   05230 REM ===============================================================
    0x55b8aadf4450 ---------B   05240 REM
    0x55b8aadf44f0 ---------B   05250 REM MANEUVER ENERGY S/R ***
    0x55b8aadf47b0 ---------B G 05260 LET E=E-N-10
    0x55b8aadf4940 ---------B   05270 IF E>=0 GOTO 5330
    0x55b8aadf4b00 ---------B   05280 PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x55b8aadf4cd0 ---------B   05290 LET S=S+E
    0x55b8aadf4e40 ---------B   05300 LET E=0
    0x55b8aadf4fd0 ---------B   05310 IF S>0 GOTO 5330
    0x55b8aadf5170 ---------B   05320 LET S=0
    0x55b8aadf51c0 ---------B T 05330 RETURN
    0x55b8aadf5240 ---------A   05340 REM
    0x55b8aadf5330 ---------A   05350 REM ===============================================================
    0x55b8aadf53b0 ---------A   05360 REM
    0x55b8aadf5450 ---------A   05370 REM L.R. SENSOR SCAN CODE ***
    0x55b8aadf56a0 ---------A T 05380 IF D(3)>=0 GOTO 5410
    0x55b8aadf5830 ---------A   05390 PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x55b8aadf58d0 ---------A   05400 GOTO 3160
    0x55b8aadf5bf0 ---------A T 05410 PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x55b8aadf5e00 ---------A   05420 LET O1$="..................."
    0x55b8aadf5ee0 ---------A   05430 PRINT O1$
    0x55b8aadf6240 ---------A   05440 FOR I=Q1-1 TO Q1+1
    0x55b8aadf62c0 ---------A   05450     REM    DIM N(3)
    0x55b8aadf6560 ---------A   05460     FOR I1=1 TO 3
    0x55b8aadf6740 ---------A   05470 	LET N(I1)=0
    0x55b8aadf67f0 ---------A   05480     NEXT I1
    0x55b8aadf6b60 ---------A   05490     FOR J=Q2-1 TO Q2+1
    0x55b8aadf6d00 ---------A   05500 	IF I<1 GOTO 5580
    0x55b8aadf6ec0 ---------A   05510 	IF I>8 GOTO 5580
    0x55b8aadf7080 ---------A   05520 	IF J<1 GOTO 5560
    0x55b8aadf7240 ---------A   05530 	IF J>8 GOTO 5560
    0x55b8aadf7660 ---------A   05540 	LET N(J-Q2+2)=G(I,J)
    0x55b8aadf7910 ---------A   05550 	LET Z(I,J)=G(I,J)
    0x55b8aadf79c0 ---------A T 05560     NEXTJ
    0x55b8aadf7a50 ---------A   05570     REM   DIM P1$(20)
    0x55b8aadf7ca0 ---------A T 05580     LET P1$=": ### : ### : ### :"
    0x55b8aadf80b0 ---------A   05590     PRINT USING P1$,N(1),N(2),N(3)
    0x55b8aadf8180 ---------A   05600     PRINT O1$
    0x55b8aadf8230 ---------A   05610 NEXT I
    0x55b8aadf82b0 ---------A   05620 GOTO 3160
    0x55b8aadf8310 ---------A   05630 REM
    0x55b8aadf8400 ---------A   05640 REM ===============================================================
    0x55b8aadf8480 ---------A   05650 REM
    0x55b8aadf8530 ---------A   05660 REM *** PHASER CONTROL CODE BEGINS HERE
    0x55b8aadf86d0 ---------A T 05670 IF K3>0 GOTO 5710
    0x55b8aadf88a0 ---------A   05680 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x55b8aadf89e0 ---------A   05690 PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x55b8aadf8a60 ---------A   05700 GOTO 3160
    0x55b8aadf8c80 ---------A T 05710 IF D(4)>=0 GOTO 5740
    0x55b8aadf8df0 ---------A   05720 PRINT "PHASERS INOPERATIVE"
    0x55b8aadf8e70 ---------A   05730 GOTO 3160
    0x55b8aadf9090 ---------A T 05740 IF D(8)>=0 GOTO 5760
    0x55b8aadf9240 ---------A   05750 PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x55b8aadf9390 ---------A T 05760 PRINT "PHASERS LOCKED ON TARGET;  "
    0x55b8aadf9550 ---------A T 05770 PRINT "ENERGY AVAILABLE ="E
    0x55b8aadf96b0 ---------A   05780 PRINT "NUMBER OF UNITS TO FIRE:";
    0x55b8aadf9780 ---------A   05790 INPUT X
    0x55b8aadf9920 ---------A   05800 IF X<=0 GOTO 3160
    0x55b8aadf9b90 ---------A   05810 IF E-X<0 GOTO 5770
    0x55b8aadf9d90 ---------A   05820 LET E=E-X
    0x55b8aadf9e10 ---------A   05830 GOSUB 7610
    0x55b8aadfa030 ---------A   05840 IF D(7)>=0 GOTO 5860
    0x55b8aadfa2d0 ---------A   05850 LET X=X*RND(1)
    0x55b8aadfa580 ---------A T 05860 LET H1=INT(X/K3)
    0x55b8aadfa7a0 ---------A   05870 FOR I=1 TO 3
    0x55b8aadfaa40 ---------A   05880     IF K(I,3)<=0 GOTO 6080
    0x55b8aadfb090 ---------A   05890     LET H=INT((H1/FND(0))*(RND(1)*2))
    0x55b8aadfb3c0 ---------A   05900     IF H>.15*K(I,3) GOTO 5940
    0x55b8aadfb570 ---------A   05910     PRINT "SENSORS SHOW NO DAMAGE"
    0x55b8aadfba80 ---------A   05920     PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x55b8aadfbb00 ---------A   05930     GOTO 6080
    0x55b8aadfbef0 ---------A T 05940     LET K(I,3)=K(I,3)-H
    0x55b8aadfc4a0 ---------A   05950     PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x55b8aadfc730 ---------A   05960     IF K(I,3)<=0 GOTO 5990
    0x55b8aadfcb20 ---------A   05970     PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x55b8aadfcbb0 ---------A   05980     GOTO 6080
    0x55b8aadfcce0 ---------A T 05990     PRINT " *** KLINGON DESTROYED ***"
    0x55b8aadfcef0 ---------A   06000     LET K3=K3-1
    0x55b8aadfd100 ---------A   06010     LET K9=K9-1
    0x55b8aadfd290 ---------A   06020     A$="   "
    0x55b8aadfd4c0 ---------A   06030     LET Z1=K(I,1)
    0x55b8aadfd6f0 ---------A   06040     LET Z2=K(I,2)
    0x55b8aadfd770 ---------A   06050     GOSUB 10550
    0x55b8aadfdc60 ---------A   06060     LET G(Q1,Q2)=K3*100+B3*10+S3
    0x55b8aadfddf0 ---------A   06070     IF K9<=0 GOTO 7980
    0x55b8aadfded0 ---------A T 06080 NEXT I
    0x55b8aadfdf50 ---------A   06090 GOTO 3160
    0x55b8aadfdfb0 ---------A   06100 REM
    0x55b8aadfe0a0 ---------A   06110 REM ===============================================================
    0x55b8aadfe120 ---------A   06120 REM
    0x55b8aadfe1d0 ---------A   06130 REM PHOTON TORPEDO CODE BEGINS ***
    0x55b8aade1f10 ---------A T 06140 IF D(5)>=0 GOTO 6170
    0x55b8aade20a0 ---------A   06150 PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x55b8aade2110 ---------A   06160 GOTO 3160
    0x55b8aade2290 ---------A T 06170 IF P>0 GOTO 6200
    0x55b8aade2420 ---------A   06180 PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x55b8aade24a0 ---------A   06190 GOTO 3160
    0x55b8aade25e0 ---------A T 06200 PRINT "TORPEDO COURSE (1-9)";
    0x55b8aade26c0 ---------A   06210 INPUT C1
    0x55b8aade2860 ---------A   06220 IF C1>=1 GOTO 6250
    0x55b8aade2a10 ---------A T 06230 PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x55b8aade2a80 ---------A   06240 GOTO 3160
    0x55b8aade2c00 ---------A T 06250 IF C1>9 GOTO 6230
    0x55b8aae002d0 ---------A   06260 IF C1<9 GOTO 6290
    0x55b8aae004a0 ---------A   06270 IF C1>=9 GOTO 6200
    0x55b8aae00650 ---------A   06280 LET C1=1
    0x55b8aae009b0 ---------A T 06290 LET X1=-SIN((C1-1)*P1)
    0x55b8aae00d10 ---------A   06300 LET X2= COS((C1-1)*P1)
    0x55b8aae00fc0 ---------A   06310 IF ABS(X1)<ABS(X2) THEN 6360
    0x55b8aae012c0 ---------A   06320 M9=ABS(1/X1)
    0x55b8aae014d0 ---------A   06330 X1=SGN(X1)
    0x55b8aae016a0 ---------A   06340 X2=X2*M9
    0x55b8aae01710 ---------A   06350 GOTO 6390
    0x55b8aae01970 ---------A T 06360 M9=ABS(1/X2)
    0x55b8aae01b00 ---------A   06370 X2=SGN(X2)
    0x55b8aae01cd0 ---------A   06380 X1=X1*M9
    0x55b8aae01ee0 ---------A T 06390 LET E=E-2
    0x55b8aae02010 ---------A   06400 LET X=S1
    0x55b8aae02140 ---------A   06410 LET Y=S2
    0x55b8aae02360 ---------A   06420 LET P=P-1
    0x55b8aae02490 ---------A   06430 PRINT "TORPEDO TRACK:"
    0x55b8aae02660 ---------A T 06440 LET X=X+X1
    0x55b8aae02830 ---------A   06450 LET Y=Y+X2
    0x55b8aae02b20 ---------A   06460 LET X9=INT(X+.5)
    0x55b8aae02e10 ---------A   06470 LET Y9=INT(Y+.5)
    0x55b8aae02fa0 ---------A   06480 IF X9<1 GOTO 7010
    0x55b8aae03170 ---------A   06490 IF X9>=9 GOTO 7010
    0x55b8aae03330 ---------A   06500 IF Y9<1 GOTO 7010
    0x55b8aae03500 ---------A   06510 IF Y9>=9 GOTO 7010
    0x55b8aae03850 ---------A   06520 PRINT "               "X9","Y9
    0x55b8aae039e0 ---------A   06530 LET A$="   "
    0x55b8aae03b10 ---------A   06540 LET Z1=X9
    0x55b8aae03c40 ---------A   06550 LET Z2=Y9
    0x55b8aae03cc0 ---------A   06560 GOSUB 10840
    0x55b8aae03ec0 ---------A   06570 IF Z3<>0 GOTO 6440
    0x55b8aae04080 ---------A   06580 LET A$="+++"
    0x55b8aae041b0 ---------A   06590 LET Z1=X9
    0x55b8aae042e0 ---------A   06600 LET Z2=Y9
    0x55b8aae04350 ---------A   06610 GOSUB 10840
    0x55b8aae044d0 ---------A   06620 IF Z3=0 GOTO 6730
    0x55b8aae04650 ---------A   06630 PRINT "*** KLINGON DESTROYED ***"
    0x55b8aae04860 ---------A   06640 LET K3=K3-1
    0x55b8aae04a80 ---------A   06650 LET K9=K9-1
    0x55b8aae04c10 ---------A   06660 IF K9<=0 GOTO 7980
    0x55b8aae04e60 ---------A   06670 FOR I=1 TO 3
    0x55b8aae050c0 ---------A   06680     IF X9<>K(I,1) GOTO 6700
    0x55b8aae05350 ---------A   06690     IF Y9=K(I,2) GOTO 6710
    0x55b8aae05430 ---------A T 06700 NEXT I
    0x55b8aae056b0 ---------A T 06710 LET K(I,3)=0
    0x55b8aae05720 ---------A   06720 GOTO 6950
    0x55b8aae058a0 ---------A T 06730 LET A$=" * "
    0x55b8aae059d0 ---------A   06740 LET Z1=X9
    0x55b8aae05b00 ---------A   06750 LET Z2=Y9
    0x55b8aae05b70 ---------A   06760 GOSUB 10840
    0x55b8aae05cf0 ---------A   06770 IF Z3=0 GOTO 6800
    0x55b8aae06150 ---------A   06780 PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x55b8aae061c0 ---------A   06790 GOTO 7020
    0x55b8aae06340 ---------A T 06800 LET A$=">!<"
    0x55b8aae06470 ---------A   06810 LET Z1=X9
    0x55b8aae065a0 ---------A   06820 LET Z2=Y9
    0x55b8aae06610 ---------A   06830 GOSUB 10840
    0x55b8aae06790 ---------A   06840 IF Z3=0 GOTO 6200
    0x55b8aae06920 ---------A   06850 PRINT "*** STARBASE DESTROYED ***"
    0x55b8aae06b30 ---------A   06860 LET B3=B3-1
    0x55b8aae06d40 ---------A   06870 LET B9=B9-1
    0x55b8aae06ed0 ---------A   06880 IF B9>0 GOTO 6920
    0x55b8aae070e0 ---------A   06890 PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x55b8aae07240 ---------A   06900 PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x55b8aae072e0 ---------A   06910 GOTO 7880
    0x55b8aae07430 ---------A T 06920 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x55b8aae07560 ---------A   06930 PRINT "   COURT MARTIAL!"
    0x55b8aae076d0 ---------A   06940 LET D0=0
    0x55b8aae07860 ---------A T 06950 LET A$="   "
    0x55b8aae07990 ---------A   06960 LET Z1=X9
    0x55b8aae07ac0 ---------A   06970 LET Z2=Y9
    0x55b8aae07b40 ---------A   06980 GOSUB 10550
    0x55b8aae08020 ---------A   06990 LET G(Q1,Q2)=K3*100+B3*10+S3
    0x55b8aae080a0 ---------A   07000 GOTO 7020
    0x55b8aae081c0 ---------A T 07010 PRINT "TORPEDO MISSED"
    0x55b8aae08230 ---------A T 07020 GOSUB 7610
    0x55b8aae08290 ---------A   07030 GOTO 3160
    0x55b8aae082f0 ---------A   07040 REM
    0x55b8aae083e0 ---------A   07050 REM ===============================================================
    0x55b8aae08460 ---------A   07060 REM
    0x55b8aae08510 ---------A   07070 REM *** SHIELD CONTROL STARTS HERE
    0x55b8aae08760 ---------A T 07080 IF D(7)>=0 GOTO 7110
    0x55b8aae088e0 ---------A   07090 PRINT "SHIELD CONTROL INOPERABLE"
    0x55b8aae08980 ---------A   07100 GOTO 3160
    0x55b8aae08d10 ---------A T 07110 PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x55b8aae08de0 ---------A   07120 INPUT X
    0x55b8aae08f80 ---------A   07130 IF X>=0 GOTO 7170
    0x55b8aae09100 ---------A   07140 IF S<>X GOTO 7170
    0x55b8aae09270 ---------A   07150 PRINT "(SHIELDS UNCHANGED)"
    0x55b8aae092f0 ---------A   07160 GOTO 3160
    0x55b8aae095b0 ---------A T 07170 IF E+S-X<0 GOTO 7110
    0x55b8aae09850 ---------A   07180 LET E=E+S-X
    0x55b8aae099a0 ---------A   07190 LET S=X
    0x55b8aae09b00 ---------A   07200 PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x55b8aae09d90 ---------A   07210 PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x55b8aae09e00 ---------A   07220 GOTO 3160
    0x55b8aae09e60 ---------A   07230 REM
    0x55b8aae09f50 ---------A   07240 REM ===============================================================
    0x55b8aae09fd0 ---------A   07250 REM
    0x55b8aae0a080 ---------A   07260 REM *** DAMAGE CONTROL STARTS HERE
    0x55b8aae0a2d0 ---------A T 07270 IF D(6)>=0 GOTO 7490
    0x55b8aae0a460 ---------A   07280 PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x55b8aae0a5f0 ---------A T 07290 IF D0=0 GOTO 3160
    0x55b8aae0a810 ---------A   07300 LET D3=0
    0x55b8aae0aa30 ---------A   07310 FOR I=1 TO 8
    0x55b8aae0ac30 ---------A   07320     IF D(I)>=0 GOTO 7340
    0x55b8aae0ae70 ---------A   07330     LET D3=D3+.1
    0x55b8aae0af20 ---------A T 07340 NEXT I
    0x55b8aae0b0c0 ---------A   07350 IF D3=0 GOTO 3160
    0x55b8aae0b2c0 ---------A   07360 LET D3=D3+D4
    0x55b8aae0b450 ---------A   07370 IF D3<1 GOTO 7390
    0x55b8aae0b620 ---------A   07380 LET D3=.9
    0x55b8aae0b7a0 ---------A T 07390 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x55b8aae0b910 ---------A   07400 PRINT "ESTIMATED TIME TO REPAIR: ";
    0x55b8aae0baf0 ---------A   07410 PRINT USING ".# STARDATES",D3
    0x55b8aae0bc60 ---------A   07420 PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x55b8aae0bd40 ---------A   07430 INPUT A$
    0x55b8aae0bf00 ---------A   07440 IF A$<>"YES" GOTO 3160
    0x55b8aae0c140 ---------A   07450 FOR I=1 TO 8
    0x55b8aae0c320 ---------A   07460     LET D(I)=0
    0x55b8aae0c3d0 ---------A   07470 NEXT I
    0x55b8aae0c690 ---------A   07480 LET T=T+D3+.1
    0x55b8aae0c7e0 ---------A T 07490 PRINT " "
    0x55b8aae0c920 ---------A   07500 PRINT "DEVICE        STATE OF REPAIR"
    0x55b8aae0cb30 ---------A   07510 FOR R1=1 TO 8
    0x55b8aae0cbc0 ---------A   07520     GOSUB 10780
    0x55b8aae0cdc0 ---------A   07530     PRINT USING "  -##.##",D(R1)
    0x55b8aae0ce70 ---------A   07540 NEXT R1
    0x55b8aae0cfb0 ---------A   07550 PRINT " "
    0x55b8aae0d020 ---------A   07560 GOTO 7290
    0x55b8aae0d080 ---------C   07570 REM
    0x55b8aae0d170 ---------C   07580 REM ===============================================================
    0x55b8aae0d1f0 ---------C   07590 REM
    0x55b8aae0d2a0 ---------C   07600 REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x55b8aae0d450 ---------C G 07610 IF K3<=0 GOTO 7820
    0x55b8aae0d610 ---------C   07620 IF D0=0 GOTO 7650
    0x55b8aae0d7b0 ---------C   07630 PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x55b8aae0d820 ---------C   07640 GOTO 7820
    0x55b8aae0da30 ---------C T 07650 FOR I=1 TO 3
    0x55b8aae0dcd0 ---------C   07660     IF K(I,3)<=0 GOTO 7810
    0x55b8aae0e390 ---------C   07670     LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x55b8aae0e590 ---------C   07680     LET S=S-H
    0x55b8aae0eb40 ---------C   07690     PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x55b8aae0ecd0 ---------C   07700     IF S<0 GOTO 7820
    0x55b8aae0efd0 ---------C   07710     PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x55b8aae0f160 ---------C   07720     IF H<20 GOTO 7810
    0x55b8aae0f3d0 ---------C   07730     IF RND(1)>.6 GOTO 7810
    0x55b8aae0f640 ---------C   07740     IF H/S<=.02 GOTO 7810
    0x55b8aae0fb00 ---------C   07750     LET D2=H/S+.5*RND(1)
    0x55b8aae0ff00 ---------C   07760     LET R1=INT(RND(1)*8+1)
    0x55b8aae101b0 ---------C   07770     LET D(R1)=D(R1)-D2
    0x55b8aae10310 ---------C   07780     PRINT "DAMAGE CONTROL REPORTS '";
    0x55b8aae10390 ---------C   07790     GOSUB 10780
    0x55b8aae104b0 ---------C   07800     PRINT " DAMAGED BY THE HIT!'"
    0x55b8aae10560 ---------C T 07810 NEXT I
    0x55b8aae105c0 ---------C T 07820 RETURN
    0x55b8aae10790 ---------A T 07830 PRINT "ITS IS STARDATE "T
    0x55b8aae10800 ---------A   07840 GOTO 7880
    0x55b8aae10960 ---------A T 07850 PRINT " "
    0x55b8aae10ad0 ---------A   07860 PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x55b8aae10d90 ---------A   07870 PRINT "IT IS STARDATE "T"."
    0x55b8aae11040 ---------A T 07880 PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x55b8aae11180 ---------A   07890 PRINT "THE END OF YOUR MISSION."
    0x55b8aae112b0 ---------A T 07900 PRINT " "
    0x55b8aae11410 ---------A   07910 PRINT " "
    0x55b8aae11590 ---------A   07920 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x55b8aae11700 ---------A   07930 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x55b8aae11840 ---------A   07940 PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x55b8aae11920 ---------A   07950 INPUT A$
    0x55b8aae11ae0 ---------A   07960 IF A$="AYE" GOTO 1280
    0x55b8aae11bc0 ---------A   07970 GOTO 11100
    0x55b8aae11d40 ---------A T 07980 PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x55b8aae11e90 ---------A   07990 PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x55b8aae11ff0 ---------A   08000 PRINT " "
    0x55b8aae12570 ---------A   08010 PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x55b8aae125e0 ---------A   08020 GOTO 7900
    0x55b8aae12640 ---------D   08030 REM
    0x55b8aae12730 ---------D   08040 REM ===============================================================
    0x55b8aae127b0 ---------D   08050 REM
    0x55b8aae12870 ---------D   08060 REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x55b8aae12bf0 ---------D G 08070 FOR I=S1-1 TO S1+1
    0x55b8aae12f60 ---------D   08080     FOR J=S2-1 TO S2+1
    0x55b8aae13240 ---------D   08090 	IF INT(I+.5)<1 GOTO 8180
    0x55b8aae13550 ---------D   08100 	IF INT(I+.5)>8 GOTO 8180
    0x55b8aae13860 ---------D   08110 	IF INT(J+.5)<1 GOTO 8180
    0x55b8aae13b70 ---------D   08120 	IF INT(J+.5)>8 GOTO 8180
    0x55b8aae13d30 ---------D   08130 	LET A$=">!<"
    0x55b8aae13e60 ---------D   08140 	LET Z1=I
    0x55b8aae13f90 ---------D   08150 	LET Z2=J
    0x55b8aae14010 ---------D   08160 	GOSUB 10840
    0x55b8aae14190 ---------D   08170 	IF Z3=1 GOTO 8220
    0x55b8aae14270 ---------D T 08180     NEXT J
    0x55b8aae14330 ---------D   08190 NEXT I
    0x55b8aae144b0 ---------D   08200 LET D0=0
    0x55b8aae14520 ---------D   08210 GOTO 8290
    0x55b8aae14680 ---------D T 08220 LET D0=1
    0x55b8aae14890 ---------D   08230 LET C$="DOCKED"
    0x55b8aae14a00 ---------D   08240 LET E=3000
    0x55b8aae14b90 ---------D   08250 LET P=10
    0x55b8aae14cd0 ---------D   08260 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x55b8aae14e40 ---------D   08270 LET S=0
    0x55b8aae14eb0 ---------D   08280 GOTO 8360
    0x55b8aae15030 ---------D T 08290 IF K3>0 GOTO 8330
    0x55b8aae152a0 ---------D   08300 IF E<E0*.1 GOTO 8350
    0x55b8aae15460 ---------D   08310 LET C$=" GREEN"
    0x55b8aae154e0 ---------D   08320 GOTO 8360
    0x55b8aae159e0 ---------D T 08330 C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x55b8aae15a50 ---------D   08340 GOTO 8360
    0x55b8aae15be0 ---------D T 08350 LET C$="YELLOW"
    0x55b8aae15e10 ---------D T 08360 IF D(2)>=0 GOTO 8410
    0x55b8aae15f90 ---------D   08370 PRINT " "
    0x55b8aae160d0 ---------D   08380 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x55b8aae16200 ---------D   08390 PRINT " "
    0x55b8aae16290 ---------D   08400 GOTO 8900
    0x55b8aae16420 ---------D T 08410 LET O1$="--------------------------------"
    0x55b8aae164f0 ---------D   08420 PRINT O1$
    0x55b8aae16700 ---------D   08430 LET N5$="####"
    0x55b8aae16860 ---------D   08440 PRINT " ";
    0x55b8aae16b20 ---------D   08450 FOR I=1 TO 22 STEP 3
    0x55b8aae16f00 ---------D   08460     PRINT MID$(Q$(1),I,3)" ";
    0x55b8aae16fb0 ---------D   08470 NEXT I
    0x55b8aae170f0 ---------D   08480 PRINT " "
    0x55b8aae17250 ---------D   08490 PRINT " ";
    0x55b8aae17510 ---------D   08500 FOR I=1 TO 22 STEP 3
    0x55b8aae178f0 ---------D   08510     PRINT MID$(Q$(2),I,3)" ";
    0x55b8aae179a0 ---------D   08520 NEXT I
    0x55b8aae17b40 ---------D   08530 PRINT "        STARDATE         ";
    0x55b8aae17cf0 ---------D   08540 PRINT USING "####.#",T
    0x55b8aae17e50 ---------D   08550 PRINT " ";
    0x55b8aae18110 ---------D   08560 FOR I=1 TO 22 STEP 3
    0x55b8aae184f0 ---------D   08570     PRINT MID$(Q$(3),I,3)" ";
    0x55b8aae185a0 ---------D   08580 NEXT I
    0x55b8aae18730 ---------D   08590 PRINT "        CONDITION        ";
    0x55b8aae18800 ---------D   08600 PRINT C$
    0x55b8aae18960 ---------D   08610 PRINT " ";
    0x55b8aae18c20 ---------D   08620 FOR I=1 TO 22 STEP 3
    0x55b8aae19000 ---------D   08630     PRINT MID$(Q$(4),I,3)" ";
    0x55b8aae190b0 ---------D   08640 NEXT I
    0x55b8aae19400 ---------D   08650 PRINT "        QUADRANT         "Q1","Q2
    0x55b8aae19560 ---------D   08660 PRINT " ";
    0x55b8aae19820 ---------D   08670 FOR I=1 TO 22 STEP 3
    0x55b8aae19c00 ---------D   08680     PRINT MID$(Q$(5),I,3)" ";
    0x55b8aae19cb0 ---------D   08690 NEXT I
    0x55b8aae1a000 ---------D   08700 PRINT "        SECTOR           "S1","S2
    0x55b8aae1a160 ---------D   08710 PRINT " ";
    0x55b8aae1a420 ---------D   08720 FOR I=1 TO 22 STEP 3
    0x55b8aae1a800 ---------D   08730     PRINT MID$(Q$(6),I,3)" ";
    0x55b8aae1a8b0 ---------D   08740 NEXT I
    0x55b8aae1aa50 ---------D   08750 PRINT "        TOTAL ENERGY     ";
    0x55b8aae1ac20 ---------D   08760 PRINT USING N5$,E+S
    0x55b8aae1ad80 ---------D   08770 PRINT " ";
    0x55b8aae1b040 ---------D   08780 FOR I=1 TO 22 STEP 3
    0x55b8aae1b420 ---------D   08790     PRINT MID$(Q$(7),I,3)" ";
    0x55b8aae1b4d0 ---------D   08800 NEXT I
    0x55b8aae1b660 ---------D   08810 PRINT "        PHOTON TORPEDOES ";
    0x55b8aae1b790 ---------D   08820 PRINT USING N5$,P
    0x55b8aae1b8f0 ---------D   08830 PRINT " ";
    0x55b8aae1bbb0 ---------D   08840 FOR I=1 TO 22 STEP 3
    0x55b8aae1bf90 ---------D   08850     PRINT MID$(Q$(8),I,3)" ";
    0x55b8aae1c040 ---------D   08860 NEXT I
    0x55b8aae1c1d0 ---------D   08870 PRINT "        SHIELDS          ";
    0x55b8aae1c300 ---------D   08880 PRINT USING N5$,S
    0x55b8aae1c3d0 ---------D   08890 PRINT O1$
    0x55b8aae1c420 ---------D T 08900 RETURN
    0x55b8aae1c4a0 ---------A   08910 REM
    0x55b8aae1c590 ---------A   08920 REM ===============================================================
    0x55b8aae1c610 ---------A   08930 REM
    0x55b8aae1c6d0 ---------A   08940 REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x55b8aae1c920 ---------A T 08950 IF D(8)>=0 GOTO 8980
    0x55b8aae1ca90 ---------A   08960 PRINT "COMPUTER DISABLED"
    0x55b8aae1cb20 ---------A   08970 GOTO 3160
    0x55b8aae1cc70 ---------A T 08980 PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x55b8aae1cdc0 ---------A   08990 INPUT A
    0x55b8aae1cf60 ---------A   09000 IF A<0 GOTO 3160
    0x55b8aae1d000 ---------A   09010 PRINT
    0x55b8aae1d1f0 ---------A   09020 LET H8=1
    0x55b8aae1d380 ---------A   09030 IF A=0 GOTO 9270
    0x55b8aae1d540 ---------A   09040 IF A>5 GOTO 9150
    0x55b8aae1d5e0 ---------A   09050 REM
    0x55b8aae1d6d0 ---------A   09060 REM ===============================================================
    0x55b8aae1d750 ---------A   09070 REM
    0x55b8aae1db70 ---------A   09080 ON A GOTO 9690, 9890, 10320, 9970, 9100
    0x55b8aae1dbe0 ---------A   09090 REM  GOTO 9150
    0x55b8aae1dca0 ---------A T 09100 REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x55b8aae1de20 ---------A   09110 LET H8=0
    0x55b8aae1dfb0 ---------A   09120 LET G5=1
    0x55b8aae1e0f0 ---------A   09130 PRINT "                      THE GALAXY"
    0x55b8aae1e180 ---------A   09140 GOTO 9280
    0x55b8aae1e2e0 ---------A T 09150 PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x55b8aae1e430 ---------A   09160 PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x55b8aae1e580 ---------A   09170 PRINT "   1 = STATUS REPORT"
    0x55b8aae1e6e0 ---------A   09180 PRINT "   2 = PHOTON TORPEDO DATA"
    0x55b8aae1e840 ---------A   09190 PRINT "   3 = STARBASE NAVIGATION DATA"
    0x55b8aae1e9a0 ---------A   09200 PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x55b8aae1eae0 ---------A   09210 PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x55b8aae1eb50 ---------A   09220 GOTO 8980
    0x55b8aae1ebb0 ---------A   09230 REM
    0x55b8aae1eca0 ---------A   09240 REM ===============================================================
    0x55b8aae1ed20 ---------A   09250 REM
    0x55b8aae1ede0 ---------A   09260 REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x55b8aae1f260 ---------A T 09270 PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x55b8aae1f3e0 ---------A T 09280 PRINT "      1     2     3     4     5     6     7     8"
    0x55b8aae1f610 ---------A   09290 LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x55b8aae1f6f0 ---------A   09300 PRINT O3$
    0x55b8aae1f770 ---------A   09310 REM   DIM N1$(2),N2$(8),N$(5)
    0x55b8aae1f990 ---------A   09320 FOR I=1 TO 8
    0x55b8aae1fbc0 ---------A   09330     LET N1$="##"
    0x55b8aae1fd20 ---------A   09340     PRINT USING N1$,I;
    0x55b8aae1ffa0 ---------A   09350     PRINT TAB(3);"|";
    0x55b8aae20130 ---------A   09360     IF H8=0 GOTO 9480
    0x55b8aae20380 ---------A   09370     FOR J=1 TO 8
    0x55b8aae205a0 ---------A   09380 	    LET N2$=" ### |"
    0x55b8aae207c0 ---------A   09390 	    LET N$=""
    0x55b8aae20910 ---------A   09400 	    IF I<>Q1 GOTO 9440
    0x55b8aae20aa0 ---------A   09410 	    IF J<>Q2 GOTO 9440
    0x55b8aae20cb0 ---------A   09420 	    LET N$=CHR$(7)
    0x55b8aae20db0 ---------A   09430 	    PRINT N$;
    0x55b8aae20fc0 ---------A T 09440 	    PRINT USING N2$,Z(I,J);
    0x55b8aae210b0 ---------A   09450 	    PRINT N$;
    0x55b8aae21160 ---------A   09460     NEXT J
    0x55b8aae211e0 ---------A   09470     GOTO 9610
    0x55b8aae21300 ---------A T 09480     LET Z4=I
    0x55b8aae21470 ---------A   09490     LET Z5=1
    0x55b8aae214f0 ---------A   09500     GOSUB 10960
    0x55b8aae21920 ---------A   09510     LET J0=INT(15-.5*LEN(G2$))
    0x55b8aae21a70 ---------A   09520     PRINT  TAB(J0);
    0x55b8aae21b70 ---------A   09530     PRINT G2$;
    0x55b8aae21de0 ---------A   09540     PRINT TAB(27);"|";
    0x55b8aae21f50 ---------A   09550     LET Z5=5
    0x55b8aae21fd0 ---------A   09560     GOSUB 10960
    0x55b8aae22380 ---------A   09570     LET J0=INT(39-.5*LEN(G2$))
    0x55b8aae224d0 ---------A   09580     PRINT  TAB(J0);
    0x55b8aae225d0 ---------A   09590     PRINT G2$;
    0x55b8aae22840 ---------A   09600     PRINT TAB(51);"|";
    0x55b8aae228b0 ---------A T 09610     PRINT
    0x55b8aae22980 ---------A   09620     PRINT O3$
    0x55b8aae22a30 ---------A   09630 NEXT I
    0x55b8aae22ab0 ---------A   09640 GOTO 3160
    0x55b8aae22b10 ---------A   09650 REM
    0x55b8aae22c00 ---------A   09660 REM ===============================================================
    0x55b8aae22c80 ---------A   09670 REM
    0x55b8aae22d40 ---------A   09680 REM *** STATUS REPORT CODE BEGINS HERE ***
    0x55b8aae22e90 ---------A T 09690 PRINT "   STATUS REPORT:"
    0x55b8aae23020 ---------A   09700 LET X$=""
    0x55b8aae231b0 ---------A   09710 IF K9=1 GOTO 9730
    0x55b8aae23380 ---------A   09720 LET X$="S"
    0x55b8aae23690 ---------A T 09730 PRINT K9" KLINGON"X$" LEFT"
    0x55b8aae239f0 ---------A   09740 LET V5=(T0+T9)-T
    0x55b8aae23bc0 ---------A   09750 PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x55b8aae23d50 ---------A   09760 LET X$=""
    0x55b8aae23ee0 ---------A   09770 IF B9=1 GOTO 9830
    0x55b8aae240b0 ---------A   09780 LET X$="S"
    0x55b8aae24240 ---------A   09790 IF B9<>0 GOTO 9830
    0x55b8aae24420 ---------A   09800 PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x55b8aae24570 ---------A   09810 PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x55b8aae24620 ---------A   09820 GOTO 7270
    0x55b8aae24a10 ---------A T 09830 PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x55b8aae24a80 ---------A   09840 GOTO 7270
    0x55b8aae24ae0 ---------A   09850 REM
    0x55b8aae24bd0 ---------A   09860 REM ===============================================================
    0x55b8aae24c50 ---------A   09870 REM
    0x55b8aae24d20 ---------A   09880 REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x55b8aae24ea0 ---------A T 09890 LET H8=0
    0x55b8aae250c0 ---------A   09900 FOR I=1 TO 3
    0x55b8aae25360 ---------A   09910     IF K(I,3)<=0 GOTO 10300
    0x55b8aae255c0 ---------A   09920     LET W1=K(I,1)
    0x55b8aae257f0 ---------A   09930     LET X=K(I,2)
    0x55b8aae25920 ---------A T 09940     LET C1=S1
    0x55b8aae25a50 ---------A   09950     LET A=S2
    0x55b8aae25ae0 ---------A   09960     GOTO10040
    0x55b8aae25c40 ---------A T 09970     PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x55b8aae26300 ---------A   09980     PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x55b8aae26450 ---------A   09990     PRINT "PLEASE ENTER --"
    0x55b8aae265b0 ---------A   10000     PRINT "  INITIAL COORDINATES (X,Y)";
    0x55b8aae26700 ---------A   10010     INPUT C1,A
    0x55b8aae26870 ---------A   10020     PRINT "  FINAL COORDINATES (X,Y)";
    0x55b8aae269a0 ---------A   10030     INPUT W1,X
    0x55b8aae26b80 ---------A T 10040     LET X=X-A
    0x55b8aae26d60 ---------A   10050     LET A=C1-W1
    0x55b8aae26ef0 ---------A   10060     IF X<0 GOTO 10170
    0x55b8aae270c0 ---------A   10070     IF A<0 GOTO 10230
    0x55b8aae27290 ---------A   10080     IF X>0 GOTO 10100
    0x55b8aae27460 ---------A   10090     IF A=0 GOTO 10190
    0x55b8aae27610 ---------A T 10100     LET C1=1
    0x55b8aae27820 ---------A T 10110     IF ABS(A)<=ABS(X) GOTO 10150
    0x55b8aae27e70 ---------A   10120     LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x55b8aae28020 ---------A   10130     PRINT "DIRECTION ="V5
    0x55b8aae280b0 ---------A   10140     GOTO 10280
    0x55b8aae28490 ---------A T 10150     PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x55b8aae28510 ---------A   10160     GOTO 10280
    0x55b8aae28690 ---------A T 10170     IF A>0 GOTO 10210
    0x55b8aae28860 ---------A   10180     IF X=0 GOTO 10230
    0x55b8aae28a00 ---------A T 10190     LET C1=5
    0x55b8aae28a70 ---------A   10200     GOTO 10110
    0x55b8aae28bd0 ---------A T 10210     LET C1=3
    0x55b8aae28c40 ---------A   10220     GOTO 10240
    0x55b8aae28db0 ---------A T 10230     LET C1=7
    0x55b8aae28fc0 ---------A T 10240     IF ABS(A)>=ABS(X) GOTO 10270
    0x55b8aae29690 ---------A   10250     PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x55b8aae29720 ---------A   10260     GOTO 10280
    0x55b8aae29b20 ---------A T 10270     PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x55b8aae29fa0 ---------A T 10280     PRINT "DISTANCE ="SQR(X^2+A^2)
    0x55b8aae2a130 ---------A   10290     IF H8=1 GOTO 3160
    0x55b8aae2a210 ---------A T 10300 NEXT I
    0x55b8aae2a2a0 ---------A   10310 GOTO 3160
    0x55b8aae2a420 ---------A T 10320 IF B3<>0 GOTO 10350
    0x55b8aae2a5f0 ---------A   10330 PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x55b8aae2a680 ---------A   10340 GOTO 3160
    0x55b8aae2a7b0 ---------A T 10350 PRINT "FROM ENTERPRISE TO STARBASE:"
    0x55b8aae2a8e0 ---------A   10360 LET W1=B4
    0x55b8aae2aa10 ---------A   10370 LET X=B5
    0x55b8aae2aaa0 ---------A   10380 GOTO 9940
    0x55b8aae2ab10 ---------E   10390 REM *** END OF LIBRARY-COMPUTER CODE
    0x55b8aae2ab90 ---------E   10400 REM
    0x55b8aae2ac80 ---------E   10410 REM ===============================================================
    0x55b8aae2ad00 ---------E   10420 REM
    0x55b8aae2adb0 ---------E   10430 REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x55b8aae2b1d0 ---------E B 10440 LET R1=INT(RND(1)*8+1)
    0x55b8aae2b5c0 ---------E   10450 LET R2=INT(RND(1)*8+1)
    0x55b8aae2b750 ---------E   10460 LET A$="   "
    0x55b8aae2b880 ---------E   10470 LET Z1=R1
    0x55b8aae2b9b0 ---------E   10480 LET Z2=R2
    0x55b8aae2ba30 ---------E   10490 GOSUB 10840
    0x55b8aae2bbb0 ---------E   10500 IF Z3=0 GOTO 10440
    0x55b8aae2bc30 ---------E   10510 RETURN
    0x55b8aae2bcb0 ---------F   10520 REM
    0x55b8aae2bda0 ---------F   10530 REM ===============================================================
    0x55b8aae2be20 ---------F   10540 REM
    0x55b8aae2bef0 ---------F G 10550 REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x55b8aae2c170 ---------F   10560 Z1 = INT(Z1+.5)
    0x55b8aae2c3f0 ---------F   10570 Z2 = INT(Z2+.5)
    0x55b8aae2c580 ---------F   10580 IF Z1<1 GOTO 10700
    0x55b8aae2c750 ---------F   10590 IF Z1>8 GOTO 10700
    0x55b8aae2c920 ---------F   10600 IF Z2<1 GOTO 10700
    0x55b8aae2caf0 ---------F   10610 IF Z2>8 GOTO 10700
    0x55b8aae2cea0 ---------F   10620 DIM Q9(24), A9(3)
    0x55b8aae2d080 ---------F   10630 CHANGE Q$(Z1) TO Q9
    0x55b8aae2d230 ---------F   10640 CHANGE A$ TO A9
    0x55b8aae2d4f0 ---------F   10650 FOR I8 = 1 TO 3
    0x55b8aae2d990 ---------F   10660     Q9(3*(Z2-1) + I8) = A9(I8)
    0x55b8aae2da40 ---------F   10670 NEXT I8
    0x55b8aae2dbd0 ---------F   10680 CHANGE Q9 TO Q$(Z1)
    0x55b8aae2dc60 ---------F   10690 GOTO 10740
    0x55b8aae2dcf0 ---------F T 10700 PRINT
    0x55b8aae2e100 ---------F   10710 PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x55b8aae2e240 ---------F   10720 PRINT "     1 <=  Z1,Z2  <=8    "
    0x55b8aae2e2b0 ---------F   10730 PRINT
    0x55b8aae2e300 ---------F T 10740 RETURN
    0x55b8aae2e380 ---------G   10750 REM
    0x55b8aae2e470 ---------G   10760 REM ===============================================================
    0x55b8aae2e4f0 ---------G   10770 REM
    0x55b8aae2e5b0 ---------G G 10780 REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x55b8aae2e710 ---------G   10790 PRINT D$(R1);
    0x55b8aae2e760 ---------G   10800 RETURN
    0x55b8aae2e7e0 ---------H   10810 REM
    0x55b8aae2e8d0 ---------H   10820 REM ===============================================================
    0x55b8aae2e950 ---------H   10830 REM
    0x55b8aae2ea10 ---------H G 10840 REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x55b8aae2ec90 ---------H   10850 LET Z1=INT(Z1+.5)
    0x55b8aae2ef00 ---------H   10860 LET Z2=INT(Z2+.5)
    0x55b8aae2f090 ---------H   10870 LET Z3=0
    0x55b8aae2f5a0 ---------H   10880 IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10900
    0x55b8aae2f740 ---------H   10890 Z3 = 1
    0x55b8aae2f790 ---------H T 10900 RETURN
    0x55b8aae2f810 ---------I   10910 REM
    0x55b8aae2f900 ---------I   10920 REM ===============================================================
    0x55b8aae2f980 ---------I   10930 REM
    0x55b8aae2fa60 ---------I   10940 REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x55b8aae2fb20 ---------I   10950 REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x55b8aae2fd30 ---------I G 10960 LET L2=2
    0x55b8aae2fec0 ---------I   10970 IF Z5>=5 GOTO 10990
    0x55b8aae30070 ---------I   10980 LET L2=1
    0x55b8aae304c0 ---------I T 10990 LET L3=2*(Z4-1)+L2
    0x55b8aae30660 ---------I   11000 LET G2$=G1$(L3)
    0x55b8aae307f0 ---------I   11010 IF G5=1 GOTO 11090
    0x55b8aae30960 ---------I   11020 LET L3=Z5
    0x55b8aae30af0 ---------I   11030 IF Z5<=4 GOTO 11050
    0x55b8aae30d30 ---------I   11040 LET L3=Z5-4
    0x55b8aae30f50 ---------I T 11050 LET G3$="IV"
    0x55b8aae310e0 ---------I   11060 IF L3=4 GOTO 11080
    0x55b8aae313b0 ---------I   11070 LET G3$=MID$(G4$,1,L3)
    0x55b8aae31680 ---------I T 11080 G2$=G2$+" "+G3$
    0x55b8aae316d0 ---------I T 11090 RETURN 
    0x55b8aae31730 ---------A T 11100 STOP
    0x55b8aae317b0 ---------J G 11111 REM Gosub target.
    0x55b8aae318b0 ---------J   11112 REM This segment was originally from file STINST.BAS and was included with 
    0x55b8aae31960 ---------J   11113 REM a CHAIN command./ASA Jul 27,2009
    0x55b8aae319f0 ---------J   11115 PRINT
    0x55b8aae31a70 ---------J   11120 REM INSTRUCTIONS FOR "STREK" GAME
    0x55b8aae31b10 ---------J   11130 REM VERSION "STINST2" 12/8/74
    0x55b8aae31d70 ---------J   11140 FOR I=1 TO 9
    0x55b8aae323f0 ---------J   11150     ON I GOTO 11350, 11470, 11650, 11750, 11830, 11890, 11970, 12020, 12070
    0x55b8aae32480 ---------J T 11160     PRINT
    0x55b8aae325e0 ---------J   11170     PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x55b8aae326b0 ---------J   11180     INPUT A$
    0x55b8aae32730 ---------J   11190     PRINT
    0x55b8aae327e0 ---------J   11200 NEXT I
    0x55b8aae329c0 ---------J   11210 PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x55b8aae32b60 ---------J   11220 PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x55b8aadfe380 ---------J   11230 PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x55b8aadfe510 ---------J   11240 PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x55b8aadfe6b0 ---------J   11250 PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x55b8aadfe850 ---------J   11260 PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x55b8aadfe9c0 ---------J   11270 PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x55b8aadfeb00 ---------J   11280 PRINT "      WILL BE ABORTED."
    0x55b8aadfeb90 ---------J   11290 PRINT
    0x55b8aadfecf0 ---------J   11300 PRINT "HIT <CAR RET> TO CONTINUE ";
    0x55b8aadfedc0 ---------J   11310 INPUT A$
    0x55b8aadfee20 ---------J   11330 RETURN
    0x55b8aadfeeb0 ---------J   11340 REM *** EXIT HERE ***
    0x55b8aadfef50 ---------J T 11350 PRINT
    0x55b8aadff090 ---------J   11360 PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x55b8aadff130 ---------J   11370 PRINT 
    0x55b8aadff2c0 ---------J   11380 PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x55b8aadff420 ---------J   11390 PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x55b8aadff4d0 ---------J   11400 PRINT
    0x55b8aadff670 ---------J   11410 PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x55b8aadff810 ---------J   11420 PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x55b8aadff9a0 ---------J   11430 PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x55b8aadffaf0 ---------J   11440 PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x55b8aadffb60 ---------J   11450 PRINT
    0x55b8aadffbd0 ---------J   11460 GOTO 11160
    0x55b8aadffc60 ---------J T 11470 PRINT
    0x55b8aadffdc0 ---------J   11480 PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x55b8aadfff20 ---------J   11490 PRINT "CAPTAIN OF THE STARSHIP:"
    0x55b8aae000a0 ---------J   11500 PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x55b8aae36bc0 ---------J   11510 PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x55b8aae36d40 ---------J   11520 PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x55b8aae36ec0 ---------J   11530 PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x55b8aae37040 ---------J   11540 PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x55b8aae371c0 ---------J   11550 PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x55b8aae37340 ---------J   11560 PRINT "                                             . . ."
    0x55b8aae374b0 ---------J   11570 PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x55b8aae375f0 ---------J   11580 PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x55b8aae37760 ---------J   11590 PRINT "                                            COURSE  "
    0x55b8aae378c0 ---------J   11600 PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x55b8aae37a20 ---------J   11610 PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x55b8aae37b80 ---------J   11620 PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x55b8aae37cc0 ---------J   11630 PRINT " USE COURSE 3, WARP FACTOR 1."
    0x55b8aae37d50 ---------J   11640 GOTO 11160
    0x55b8aae37ec0 ---------J T 11650 PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x55b8aae38040 ---------J   11660 PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x55b8aae381b0 ---------J   11670 PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x55b8aae38310 ---------J   11680 PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x55b8aae38480 ---------J   11690 PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x55b8aae385f0 ---------J   11700 PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x55b8aae38750 ---------J   11710 PRINT "		 *  = STAR"
    0x55b8aae388a0 ---------J   11720 PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x55b8aae38910 ---------J   11730 PRINT
    0x55b8aae389a0 ---------J   11740 GOTO 11160
    0x55b8aae38b10 ---------J T 11750 PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x55b8aae38ca0 ---------J   11760 PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x55b8aae38e40 ---------J   11770 PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x55b8aae38fe0 ---------J   11780 PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x55b8aae39170 ---------J   11790 PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x55b8aae392f0 ---------J   11800 PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x55b8aae39450 ---------J   11810 PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x55b8aae394e0 ---------J   11820 GOTO 11160
    0x55b8aae39640 ---------J T 11830 PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x55b8aae397d0 ---------J   11840 PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x55b8aae39950 ---------J   11850 PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x55b8aae39ac0 ---------J   11860 PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x55b8aae39bf0 ---------J   11870 PRINT "  PHASERS, TOO!)"
    0x55b8aae39c80 ---------J   11880 GOTO 11160
    0x55b8aae39e00 ---------J T 11890 PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x55b8aae39f90 ---------J   11900 PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x55b8aae3a120 ---------J   11910 PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x55b8aae3a290 ---------J   11920 PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x55b8aae3a3f0 ---------J   11930 PRINT "  HIS PHASER FIRE."
    0x55b8aae3a590 ---------J   11940 PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x55b8aae3a6f0 ---------J   11950 PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x55b8aae3a780 ---------J   11960 GOTO 11160
    0x55b8aae3a8f0 ---------J T 11970 PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x55b8aae3aa90 ---------J   11980 PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x55b8aae3ac10 ---------J   11990 PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x55b8aae3ad60 ---------J   12000 PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x55b8aae3adf0 ---------J   12010 GOTO 11160
    0x55b8aae3af50 ---------J T 12020 PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x55b8aae3b0e0 ---------J   12030 PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x55b8aae3b250 ---------J   12040 PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x55b8aae3b380 ---------J   12050 PRINT "  DAMAGED."
    0x55b8aae3b410 ---------J   12060 GOTO 11160
    0x55b8aae3b570 ---------J T 12070 PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x55b8aae3b6e0 ---------J   12080 PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x55b8aae3b870 ---------J   12090 PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x55b8aae3b9f0 ---------J   12100 PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x55b8aae3bb50 ---------J   12110 PRINT "     LONG RANGE SENSOR SCANS."
    0x55b8aae3bcd0 ---------J   12120 PRINT "  OPTION 1 = STATUS REPORT"
    0x55b8aae3be50 ---------J   12130 PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x55b8aae3bfb0 ---------J   12140 PRINT "     REMAINING IN THE GAME."
    0x55b8aae3c130 ---------J   12150 PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x55b8aae3c2b0 ---------J   12160 PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x55b8aae3c410 ---------J   12170 PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x55b8aae3c580 ---------J   12180 PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x55b8aae3c6f0 ---------J   12190 PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x55b8aae3c860 ---------J   12200 PRINT "     WITHIN YOUR QUADRANT"
    0x55b8aae3c9e0 ---------J   12210 PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x55b8aae3cb50 ---------J   12220 PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x55b8aae3ccb0 ---------J   12230 PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x55b8aae3ce30 ---------J   12240 PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x55b8aae3cfb0 ---------J   12250 PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x55b8aae3d0f0 ---------J   12260 PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x55b8aae3d160 ---------J   12270 GOTO 11160
    0x55b8aae3d1a0 ---------A   12280 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01280      01200T, 07960T
     01990      01940T
     02020      01950T
     02050      01960T
     02070      01980T, 02010T, 02040T
     02110      02080T
     02130      02100T
     02270      02240T
     02280      02220T
     02330      02280T
     02460      05210T
     02660      02620T
     02670      02650T
     02760      02720T, 02740T
     02770      02560T, 02570T, 02580T, 02590T
     03150      03310T, 04780T
     03160      03440T, 03530T, 03620T, 03660T, 03750T, 03760T, 05400T, 05620T, 
                05700T, 05730T, 05800T, 06090T, 06160T, 06190T, 06240T, 07030T, 
                07100T, 07160T, 07220T, 07290T, 07350T, 07440T, 08970T, 09000T, 
                09640T, 10290T, 10310T, 10340T
     03190      03160T
     03230      03170T, 03180T
     03310      03270T, 03280T, 03290T
     03320      03260T
     03490      03310T, 03700T
     03520      03550T, 03560T
     03540      03510T
     03570      03540T
     03630      03590T
     03670      03630T
     03710      03670T, 03680T
     03840      03720T
     03950      03850T
     04050      03990T
     04120      04090T
     04160      04060T, 04080T
     04310      04230T
     04410      04210T, 04300T
     04640      04580T
     04650      04630T, 05180T
     04750      04730T
     04800      04540T, 04550T, 04560T, 04570T
     04910      04870T
     04950      04910T
     04990      04950T
     05030      04990T
     05070      05030T
     05110      05070T
     05180      05110T
     05260      04710G, 05200G
     05330      05270T, 05310T
     05380      03310T
     05410      05380T
     05560      05520T, 05530T
     05580      05500T, 05510T
     05670      03310T
     05710      05670T
     05740      05710T
     05760      05740T
     05770      05810T
     05860      05840T
     05940      05900T
     05990      05960T
     06080      05880T, 05930T, 05980T
     06140      03310T
     06170      06140T
     06200      06170T, 06270T, 06840T
     06230      06250T
     06250      06220T
     06290      06260T
     06360      06310T
     06390      06350T
     06440      06570T
     06700      06680T
     06710      06690T
     06730      06620T
     06800      06770T
     06920      06880T
     06950      06720T
     07010      06480T, 06490T, 06500T, 06510T
     07020      06790T, 07000T
     07080      03310T, 03790T
     07110      07080T, 07170T
     07170      07130T, 07140T
     07270      03310T, 09820T, 09840T
     07290      07560T
     07340      07320T
     07390      07370T
     07490      07270T
     07610      03960G, 05830G, 07020G
     07650      07620T
     07810      07660T, 07720T, 07730T, 07740T
     07820      07610T, 07640T, 07700T
     07830      04760T, 05170T
     07850      03220T
     07880      03310T, 06910T, 07840T
     07900      08020T
     07980      06070T, 06660T
     08070      03150G
     08180      08090T, 08100T, 08110T, 08120T
     08220      08170T
     08290      08210T
     08330      08290T
     08350      08300T
     08360      08280T, 08320T, 08340T
     08410      08360T
     08900      08400T
     08950      03310T
     08980      08950T, 09220T
     09100      09080T
     09150      09040T
     09270      09030T
     09280      09140T
     09440      09400T, 09410T
     09480      09360T
     09610      09470T
     09690      09080T
     09730      09710T
     09830      09770T, 09790T
     09890      09080T
     09940      10380T
     09970      09080T
     10040      09960T
     10100      10080T
     10110      10200T
     10150      10110T
     10170      10060T
     10190      10090T
     10210      10170T
     10230      10070T, 10180T
     10240      10220T
     10270      10240T
     10280      10140T, 10160T, 10260T
     10300      09910T
     10320      09080T
     10350      10320T
     10440      02900G, 03000G, 03090G, 03900G, 10500T
     10550      02880G, 02940G, 03040G, 03130G, 03890G, 03940G, 04440G, 04700G, 
                06050G, 06980G
     10700      10580T, 10590T, 10600T, 10610T
     10740      10690T
     10780      04140G, 04270G, 04340G, 07520G, 07790G
     10840      06560G, 06610G, 06760G, 06830G, 08160G, 10490G
     10900      10880T
     10960      02600G, 09500G, 09560G
     10990      10970T
     11050      11030T
     11080      11060T
     11090      11010T
     11100      07970T
     11111      01220G
     11160      11460T, 11640T, 11740T, 11820T, 11880T, 11960T, 12010T, 12060T, 
                12270T
     11350      11150T
     11470      11150T
     11650      11150T
     11750      11150T
     11830      11150T
     11890      11150T
     11970      11150T
     12020      11150T
     12070      11150T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55b8aadb7d00   0x55b8aadb7d00   0x55b8aae3d1a0   0x55b8aae3d1a0 
   B) 0x55b8aadf42e0   0x55b8aadf47b0   0x55b8aadf51c0   0x55b8aadf51c0 
   C) 0x55b8aae0d080   0x55b8aae0d450   0x55b8aae105c0   0x55b8aae105c0 
   D) 0x55b8aae12640   0x55b8aae12bf0   0x55b8aae1c420   0x55b8aae1c420 
   E) 0x55b8aae2ab10   0x55b8aae2b1d0   0x55b8aae2bc30   0x55b8aae2bc30 
   F) 0x55b8aae2bcb0   0x55b8aae2bef0   0x55b8aae2e300   0x55b8aae2e300 
   G) 0x55b8aae2e380   0x55b8aae2e5b0   0x55b8aae2e760   0x55b8aae2e760 
   H) 0x55b8aae2e7e0   0x55b8aae2ea10   0x55b8aae2f790   0x55b8aae2f790 
   I) 0x55b8aae2f810   0x55b8aae2fd30   0x55b8aae316d0   0x55b8aae316d0 
   J) 0x55b8aae317b0   0x55b8aae317b0   0x55b8aadfee20   0x55b8aae3d160 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!
    NOTE: Routine I overlaps, or is tangled with, routine A!
    NOTE: Routine J overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     12400 - 10000   -2390 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/strek2/basic/strek2.bas'
 *
    A              Integer 
    A$             String  
    A1$            String  
    A9    Array    Integer     {0,4} 
    A9             Integer 
    ABS   Function Integer     args=1, int   
    B3             Integer 
    B4             Integer 
    B5             Integer 
    B9             Integer 
    C     Array    Integer     {0,10} {0,3} 
    C              Integer 
    C$             String  
    C1             Integer 
    CHR$  Function String      args=1, int   
    COS   Function Integer     args=1, float 
    D              Integer 
    D     Array    Float       {0,9} 
    D$    Array    String      {0,9} 
    D0             Integer 
    D1             Integer 
    D2             Float   
    D3             Float   
    D4             Float   
    D6             Integer 
    E              Integer 
    E0             Integer 
    FND   Function Integer     args=1, int   
    G     Array    Integer     {0,9} {0,9} 
    G1$   Array    String      {0,17} 
    G2$            String  
    G3$            String  
    G4$            String  
    G5             Integer 
    H              Integer 
    H1             Integer 
    H8             Integer 
    I              Integer 
    I1             Integer 
    I7             Integer 
    I8             Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    J0             Integer 
    K     Array    Integer     {0,4} {0,4} 
    K              Integer 
    K3             Integer 
    K7             Integer 
    K9             Integer 
    L2             Integer 
    L3             Integer 
    LEN   Function Integer     args=1, char* 
    M9             Integer 
    MID$  Function String      args=2, char* int   
    N     Array    Integer     {0,4} 
    N              Integer 
    N$             String  
    N1$            String  
    N2$            String  
    N5$            String  
    O1$            String  
    O3$            String  
    P              Integer 
    P0             Integer 
    P1             Float   
    P1$            String  
    Q$    Array    String      {0,9} 
    Q1             Integer 
    Q2             Integer 
    Q4             Integer 
    Q5             Integer 
    Q9    Array    Integer     {0,25} 
    Q9             Integer 
    R1             Integer 
    R2             Integer 
    RND   Function Integer     args=1, int   
    S              Integer 
    S1             Integer 
    S2             Integer 
    S3             Integer 
    S9             Integer 
    SGN   Function Integer     args=1, int   
    SIN   Function Integer     args=1, float 
    SPACE$ Function String      args=1, int   
    SQR   Function Integer     args=1, float 
    T              Float   
    T0             Integer 
    T8             Float   
    T9             Integer 
    TAB   Function String      args=1, 
    V5             Integer 
    W1             Integer 
    X              Integer 
    X$             String  
    X0$            String  
    X1             Integer 
    X2             Integer 
    X5             Integer 
    X9             Integer 
    Y              Integer 
    Y9             Integer 
    Z     Array    Integer     {0,9} {0,9} 
    Z1             Integer 
    Z2             Integer 
    Z3             Integer 
    Z4             Integer 
    Z5             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/strek2/basic/strek2.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55b8aadb7d00 ---------A   01000 REM (VERSION "STREK7", 1/12/75 RCL)
    0x55b8aadb7da0 ---------A   01010 REM
    0x55b8aadb7e20 ---------A   01020 REM
    0x55b8aadb7f10 ---------A   01030 REM ***         *** STAR TREK ***       ***
    0x55b8aadb7ff0 ---------A   01040 REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    0x55b8aadb8100 ---------A   01050 REM *** AS SEEN ON THE STAR TREK TV SHOW.
    0x55b8aadb81e0 ---------A   01060 REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    0x55b8aadb82c0 ---------A   01070 REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    0x55b8aadb83a0 ---------A   01080 REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    0x55b8aadb84f0 ---------A   01090 REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    0x55b8aadb85b0 ---------A   01100 REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    0x55b8aadb8640 ---------A   01110 REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    0x55b8aadb86b0 ---------A   01120 REM *** ADDRESS TO:   R.C.LEEDOM
    0x55b8aadb8790 ---------A   01130 REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    0x55b8aadb8860 ---------A   01140 REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    0x55b8aadb88e0 ---------A   01150 RANDOMIZE
    0x55b8aadb8bb0 ---------A   01160 PRINT  TAB(15);"* * * STAR TREK * * *"
    0x55b8aadc4580 ---------A   01170 PRINT
    0x55b8aadc46b0 ---------A   01180 PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    0x55b8aadc4810 ---------A   01190 INPUT A$
    0x55b8aadc49d0 ---------A   01200 IF A$<>"YES" GOTO 1270
    0x55b8aadc4b60 ---------A   01210 PRINT "PLEASE WAIT  . . .";
    0x55b8aadc4bd0 ---------A   01220 GOSUB 11190
    0x55b8aadc4c30 ---------A   01230 REM
    0x55b8aadc4d20 ---------A   01240 REM ===============================================================
    0x55b8aadc4da0 ---------A   01250 REM
    0x55b8aadc4e40 ---------A   01260 REM  PROGRAM BEGINS HERE .....
    0x55b8aadc5040 ---------A T 01270 DIM Q$(8)
    0x55b8aadc52d0 ---------A   01280 FOR I = 1 TO 8
    0x55b8aadc5590 ---------A   01290     Q$(I) = SPACE$(24)
    0x55b8aadc5640 ---------A   01300 NEXT I
    0x55b8aadc60f0 ---------A   01310 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    0x55b8aadc6730 ---------A   01320 LET T=INT(RND(1)*20+20)*100
    0x55b8aadc6c10 ---------A   01330 LET P1=3.14159/4
    0x55b8aadc6dc0 ---------A   01340 LET T0=T
    0x55b8aadc6fb0 ---------A   01350 LET T9=30
    0x55b8aadc71a0 ---------A   01360 LET D0=0
    0x55b8aadc7390 ---------A   01370 LET E0=3000
    0x55b8aadc7540 ---------A   01380 LET E=E0
    0x55b8aadc7730 ---------A   01390 LET P=10
    0x55b8aadc78e0 ---------A   01400 LET P0=P
    0x55b8aadc7ad0 ---------A   01410 LET S9=200
    0x55b8aadc7ce0 ---------A   01420 LET S=0
    0x55b8aadc8770 ---------A   01430 DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    0x55b8aadc8800 ---------A   01440 REM
    0x55b8aadc88f0 ---------A   01450 REM ===============================================================
    0x55b8aadc8970 ---------A   01460 REM
    0x55b8aadc8a20 ---------A   01470 REM INITIALIZE INTERPRISE'S POSITION
    0x55b8aadc8ec0 ---------A   01480 LET Q1=INT(RND(1)*8+1)
    0x55b8aadc9340 ---------A   01490 LET Q2=INT(RND(1)*8+1)
    0x55b8aadc9740 ---------A   01500 LET S1=INT(RND(1)*8+1)
    0x55b8aadc9b30 ---------A   01510 LET S2=INT(RND(1)*8+1)
    0x55b8aadc9c60 ---------A   01520 MAT C=ZER
    0x55b8aadca000 ---------A   01530 LET C(4,1)=-1
    0x55b8aadca2b0 ---------A   01540 LET C(3,1)=-1
    0x55b8aadca560 ---------A   01550 LET C(2,1)=-1
    0x55b8aadca810 ---------A   01560 LET C(4,2)=-1
    0x55b8aadcaac0 ---------A   01570 LET C(5,2)=-1
    0x55b8aadcad70 ---------A   01580 LET C(6,2)=-1
    0x55b8aadcb020 ---------A   01590 LET C(1,2)=1
    0x55b8aadcb2d0 ---------A   01600 LET C(2,2)=1
    0x55b8aadcb580 ---------A   01610 LET C(6,1)=1
    0x55b8aadcb830 ---------A   01620 LET C(7,1)=1
    0x55b8aadcbae0 ---------A   01630 LET C(8,1)=1
    0x55b8aadcbd90 ---------A   01640 LET C(8,2)=1
    0x55b8aadcc450 ---------A   01650 LET C(9,2)=1
    0x55b8aadcc640 ---------A   01660 DIM D(8)
    0x55b8aadcc840 ---------A   01670 FOR I=1 TO 8
    0x55b8aadcca20 ---------A   01680     LET D(I)=0
    0x55b8aadccad0 ---------A   01690 NEXT I
    0x55b8aadcccd0 ---------A   01700 DIM D$(8)
    0x55b8aadccd60 ---------A   01710 RESTORE
    0x55b8aadcd5f0 ---------A   01720 READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    0x55b8aadcd980 ---------A   01730 DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    0x55b8aadcdcf0 ---------A   01740 DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    0x55b8aadcdf00 ---------A   01750 LET G4$="III"
    0x55b8aadce0f0 ---------A   01760 DIM G1$(16)
    0x55b8aadce2f0 ---------A   01770 FOR I=1 TO 16
    0x55b8aadce430 ---------A   01780     READ G1$(I)
    0x55b8aadce4d0 ---------A   01790 NEXT I
    0x55b8aadceb00 ---------A   01800 DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    0x55b8aadcef50 ---------A   01810 DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    0x55b8aadcf2c0 ---------A   01820 DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    0x55b8aadcf4b0 ---------A   01830 LET B9=0
    0x55b8aadcf6b0 ---------A   01840 LET K9=0
    0x55b8aadcf8c0 ---------A   01850 LET A1$="NSLPTSDCX"
    0x55b8aadcf930 ---------A   01860 REM
    0x55b8aadcfa20 ---------A   01870 REM ===============================================================
    0x55b8aadcfaa0 ---------A   01880 REM
    0x55b8aadcfb50 ---------A   01890 REM  SET UP WHAT EXISTS IN GALAXY ...
    0x55b8aadcfd70 ---------A   01900 FOR I=1 TO 8
    0x55b8aadd0010 ---------A   01910     FOR J=1 TO 8
    0x55b8aadd0280 ---------A   01920 	LET R1=RND(1)
    0x55b8aadd0410 ---------A   01930 	IF R1>.98 GOTO 1980
    0x55b8aadd05e0 ---------A   01940 	IF R1>.95 GOTO 2010
    0x55b8aadd07b0 ---------A   01950 	IF R1>.8  GOTO 2040
    0x55b8aadd09d0 ---------A   01960 	LET K3=0
    0x55b8aadd0a40 ---------A   01970 	GOTO 2060
    0x55b8aadd0ba0 ---------A T 01980 	LET K3=3
    0x55b8aadd0db0 ---------A   01990 	LET K9=K9+3
    0x55b8aadd0e20 ---------A   02000 	GOTO 2060
    0x55b8aadd0f80 ---------A T 02010 	LET K3=2
    0x55b8aadd1190 ---------A   02020 	LET K9=K9+2
    0x55b8aadd1200 ---------A   02030 	GOTO 2060
    0x55b8aadd1360 ---------A T 02040 	LET K3=1
    0x55b8aadd1570 ---------A   02050 	LET K9=K9+1
    0x55b8aadd1750 ---------A T 02060 	LET R1=RND(1)
    0x55b8aadd18e0 ---------A   02070 	IF R1>.96 GOTO 2100
    0x55b8aadd1b00 ---------A   02080 	LET B3=0
    0x55b8aadd1b70 ---------A   02090 	GOTO 2120
    0x55b8aadd1cd0 ---------A T 02100 	LET B3=1
    0x55b8aadd1ef0 ---------A   02110 	LET B9=B9+1
    0x55b8aadd2370 ---------A T 02120 	LET S3=INT(RND(1)*8+1)
    0x55b8aadd2880 ---------A   02130 	LET G(I,J)=K3*100+B3*10+S3
    0x55b8aadd2910 ---------A   02140 	REM K3=#KLINGONS B3=#STARBASES S3=#STARS
    0x55b8aadd2b50 ---------A   02150 	LET Z(I,J)=0
    0x55b8aadd2c00 ---------A   02160     NEXT J
    0x55b8aadd2cc0 ---------A   02170 NEXT I
    0x55b8aadd2e80 ---------A   02180 LET K7=K9
    0x55b8aadd3090 ---------A   02190 LET X$=""
    0x55b8aadd32b0 ---------A   02200 LET X0$=" IS "
    0x55b8aadd3440 ---------A   02210 IF B9<>0 GOTO 2270
    0x55b8aadd35f0 ---------A   02220 LET B9=1
    0x55b8aadd38c0 ---------A   02230 IF G(6,3)>=200 GOTO 2260
    0x55b8aadd3d90 ---------A   02240 LET G(6,3)=G(6,3)+100
    0x55b8aadd3fb0 ---------A   02250 LET K9=K9+1
    0x55b8aadd4440 ---------A T 02260 LET G(6,3)=G(6,3)+10
    0x55b8aadd45d0 ---------A T 02270 IF B9=1 GOTO 2320
    0x55b8aadd4790 ---------A   02280 LET X$="S"
    0x55b8aadd5130 ---------A   02290 LET X0$=" ARE "
    0x55b8aadd5260 ---------A   02300 PRINT " "
    0x55b8aadd53b0 ---------A   02310 PRINT " "
    0x55b8aadd54f0 ---------A T 02320 PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    0x55b8aadd5650 ---------A   02330 PRINT " "
    0x55b8aadd5930 ---------A   02340 PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    0x55b8aadd5ac0 ---------A   02350 PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    0x55b8aadd6010 ---------A   02360 PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    0x55b8aadd6420 ---------A   02370 PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    0x55b8aadd6580 ---------A   02380 PRINT " "
    0x55b8aadd66f0 ---------A   02390 PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    0x55b8aadd67c0 ---------A   02400 INPUT A$
    0x55b8aadd6840 ---------A   02410 REM
    0x55b8aadd6930 ---------A   02420 REM ===============================================================
    0x55b8aadd69b0 ---------A   02430 REM
    0x55b8aadd6a70 ---------A   02440 REM *** HERE ANY TIME ENTER NEW QUADRANT ...
    0x55b8aadd6c30 ---------A T 02450 LET Z4=Q1
    0x55b8aadd6de0 ---------A   02460 LET Z5=Q2
    0x55b8aadd6f50 ---------A   02470 LET K3=0
    0x55b8aadd70c0 ---------A   02480 LET B3=0
    0x55b8aadd7230 ---------A   02490 LET S3=0
    0x55b8aadd7420 ---------A   02500 LET G5=0
    0x55b8aadd7750 ---------A   02510 LET D4=.5*RND(1)
    0x55b8aadd79f0 ---------A   02520 FOR I7 = 1 TO 8
    0x55b8aadd7c30 ---------A   02530     Q$(I7)=SPACE$(24)
    0x55b8aadd7ce0 ---------A   02540 NEXT I7
    0x55b8aadd7e80 ---------A   02550 IF Q1<1 GOTO 2760
    0x55b8aadd8040 ---------A   02560 IF Q1>8 GOTO 2760
    0x55b8aadd8200 ---------A   02570 IF Q2<1 GOTO 2760
    0x55b8aadd83c0 ---------A   02580 IF Q2>8 GOTO 2760
    0x55b8aadd8460 ---------A   02590 GOSUB 10990
    0x55b8aadd8590 ---------A   02600 PRINT " "
    0x55b8aadd86e0 ---------A   02610 IF T<>T0 GOTO 2650
    0x55b8aadd88b0 ---------A   02620 PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    0x55b8aadd8bd0 ---------A   02630 PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    0x55b8aadd8c60 ---------A   02640 GOTO 2660
    0x55b8aadd8ee0 ---------A T 02650 PRINT "NOW ENTERING "G2$" QUADRANT ..."
    0x55b8aadd9020 ---------A T 02660 PRINT " "
    0x55b8aadd9370 ---------A   02670 LET X=G(Q1,Q2)*.01
    0x55b8aadd9510 ---------A   02680 LET K3=INT(X)
    0x55b8aadd9880 ---------A   02690 LET B3=INT((X-K3)*10)
    0x55b8aadd9df0 ---------A   02700 LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    0x55b8aadd9f80 ---------A   02710 IF K3=0 GOTO 2750
    0x55b8aadda120 ---------A   02720 PRINT "COMBAT AREA      CONDITION RED"
    0x55b8aadda2b0 ---------A   02730 IF S>200 GOTO 2750
    0x55b8aadda440 ---------A   02740 PRINT "   SHIELDS DANGEROUSLY LOW"
    0x55b8aadda570 ---------A T 02750 MAT K=ZER
    0x55b8aadda870 ---------A T 02760 FOR I=1 TO 3
    0x55b8aaddaaf0 ---------A   02770     LET K(I,3)=0
    0x55b8aaddaba0 ---------A   02780 NEXT I
    0x55b8aaddac20 ---------A   02790 REM
    0x55b8aaddad10 ---------A   02800 REM ===============================================================
    0x55b8aaddad90 ---------A   02810 REM
    0x55b8aaddae70 ---------A   02820 REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    0x55b8aaddaf30 ---------A   02830 REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    0x55b8aaddb0d0 ---------A   02840 LET A$="<*>"
    0x55b8aaddb280 ---------A   02850 LET Z1=S1
    0x55b8aaddb430 ---------A   02860 LET Z2=S2
    0x55b8aaddb4a0 ---------A   02870 GOSUB 10570
    0x55b8aaddb660 ---------A   02880 FOR I=1 TO K3
    0x55b8aaddb6e0 ---------A   02890     GOSUB 10430
    0x55b8aaddb860 ---------A   02900     LET A$="+++"
    0x55b8aaddb990 ---------A   02910     LET Z1=R1
    0x55b8aaddbb40 ---------A   02920     LET Z2=R2
    0x55b8aaddbbb0 ---------A   02930     GOSUB 10570
    0x55b8aaddbdd0 ---------A   02940     LET K(I,1)=R1
    0x55b8aaddc010 ---------A   02950     LET K(I,2)=R2
    0x55b8aaddc280 ---------A   02960     LET K(I,3)=200
    0x55b8aaddc330 ---------A   02970 NEXT I
    0x55b8aaddc510 ---------A   02980 FOR I=1 TO B3
    0x55b8aaddc590 ---------A   02990     GOSUB 10430
    0x55b8aaddc710 ---------A   03000     LET A$=">!<"
    0x55b8aaddc840 ---------A   03010     LET Z1=R1
    0x55b8aaddc970 ---------A   03020     LET Z2=R2
    0x55b8aaddc9e0 ---------A   03030     GOSUB 10570
    0x55b8aaddcb80 ---------A   03040     LET B4=Z1
    0x55b8aaddcd30 ---------A   03050     LET B5=Z2
    0x55b8aaddcde0 ---------A   03060 NEXT I
    0x55b8aaddcfc0 ---------A   03070 FOR I=1 TO S3
    0x55b8aaddd040 ---------A   03080     GOSUB 10430
    0x55b8aaddd1c0 ---------A   03090     LET A$=" * "
    0x55b8aaddd2f0 ---------A   03100     LET Z1=R1
    0x55b8aaddd420 ---------A   03110     LET Z2=R2
    0x55b8aaddd490 ---------A   03120     GOSUB 10570
    0x55b8aaddd530 ---------A   03130 NEXT I
    0x55b8aaddd5c0 ---------A T 03140 GOSUB 9540
    0x55b8aaddd7e0 ---------A T 03150 IF S+E<=10 GOTO 3180
    0x55b8aaddd9a0 ---------A   03160 IF E>10 GOTO 3220
    0x55b8aadddc10 ---------A   03170 IF D(7)>=0 GOTO 3220
    0x55b8aadde1c0 ---------A T 03180 PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    0x55b8aadde360 ---------A   03190 PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    0x55b8aadde4c0 ---------A   03200 PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    0x55b8aadde530 ---------A   03210 GOTO 7460
    0x55b8aadde670 ---------A T 03220 PRINT "COMMAND";
    0x55b8aadde740 ---------A   03230 INPUT A$
    0x55b8aadde980 ---------A   03240 FOR I=1 TO 9
    0x55b8aaddee60 ---------A   03250     IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3310
    0x55b8aaddf030 ---------A   03260     IF I<>2 GOTO 3300
    0x55b8aaddf2e0 ---------A   03270     IF LEN(A$)<2 GOTO 3300
    0x55b8aaddf670 ---------A   03280     IF MID$(A$,2,1)="R" GOTO 3300
    0x55b8aaddf850 ---------A   03290     LET I=6
    0x55b8aaddfec0 ---------A T 03300     ON I GOTO 3480, 3140, 5250, 5540, 6010, 6950, 7140, 7680, 7490
    0x55b8aaddff70 ---------A T 03310 NEXT I
    0x55b8aade00f0 ---------A   03320 PRINT "ENTER ONE OF THE FOLLOWING:"
    0x55b8aade0240 ---------A   03330 PRINT "  NAV (TO SET COURSE)"
    0x55b8aade03a0 ---------A   03340 PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    0x55b8aade04f0 ---------A   03350 PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    0x55b8aade0650 ---------A   03360 PRINT "  PHA (TO FIRE PHASERS)"
    0x55b8aade07b0 ---------A   03370 PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    0x55b8aade0910 ---------A   03380 PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    0x55b8aade0a70 ---------A   03390 PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    0x55b8aade0bd0 ---------A   03400 PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    0x55b8aade0d10 ---------A   03410 PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    0x55b8aade0e40 ---------A   03420 PRINT " "
    0x55b8aade0eb0 ---------A   03430 GOTO 3150
    0x55b8aade0f10 ---------A   03440 REM
    0x55b8aade1000 ---------A   03450 REM ===============================================================
    0x55b8aade1080 ---------A   03460 REM
    0x55b8aade1120 ---------A   03470 REM  COURSE CONTROL BEGINS HERE
    0x55b8aade1290 ---------A T 03480 PRINT "COURSE(1-9)";
    0x55b8aade13f0 ---------A   03490 INPUT C1
    0x55b8aade1590 ---------A   03500 IF C1>=1 GOTO 3530
    0x55b8aade1740 ---------A T 03510 PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x55b8aade17b0 ---------A   03520 GOTO 3150
    0x55b8aade1930 ---------A T 03530 IF C1<9 GOTO 3560
    0x55b8aade1af0 ---------A   03540 IF C1>9 GOTO 3510
    0x55b8aade1ba0 ---------A   03550 GOTO 3510
    0x55b8aade1ce0 ---------A T 03560 PRINT "WARP FACTOR (0-8)";
    0x55b8aadd48f0 ---------A   03570 INPUT W1
    0x55b8aadd4a90 ---------A   03580 IF W1 > 0 GOTO 3620
    0x55b8aadd4c50 ---------A   03590 PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    0x55b8aadd4ee0 ---------A   03600 PRINT "          SET WARP "W1" !"
    0x55b8aadd4f60 ---------A   03610 GOTO 3150
    0x55b8aade2e60 ---------A T 03620 IF W1<=8 GOTO 3660
    0x55b8aade2ff0 ---------A   03630 PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    0x55b8aade3280 ---------A   03640 PRINT "         TAKE WARP "W1"!/"
    0x55b8aade3300 ---------A   03650 GOTO 3150
    0x55b8aade3520 ---------A T 03660 IF D(1)>=0 GOTO 3700
    0x55b8aade36f0 ---------A   03670 IF W1<=0.2 GOTO 3700
    0x55b8aade38a0 ---------A   03680 PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    0x55b8aade3920 ---------A   03690 GOTO 3480
    0x55b8aade3cf0 ---------A T 03700 LET N=INT(W1*8+.5)
    0x55b8aade3f20 ---------A   03710 IF E-N>=0 GOTO 3830
    0x55b8aade40f0 ---------A   03720 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    0x55b8aade43a0 ---------A   03730 PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    0x55b8aade4590 ---------A   03740 IF S<N-E GOTO 3150
    0x55b8aade4800 ---------A   03750 IF D(7)<0 GOTO 3150
    0x55b8aade4b30 ---------A   03760 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    0x55b8aade4c80 ---------A   03770 PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    0x55b8aade4cf0 ---------A   03780 GOTO 6950
    0x55b8aade4d50 ---------A   03790 REM
    0x55b8aade4e40 ---------A   03800 REM ===============================================================
    0x55b8aade4ec0 ---------A   03810 REM
    0x55b8aade4f80 ---------A   03820 REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...
    0x55b8aade5170 ---------A T 03830 FOR I=1 TO K3
    0x55b8aade5450 ---------A   03840     IF K(1,3)<=0 GOTO 3940
    0x55b8aade5610 ---------A   03850     LET A$="   "
    0x55b8aade5840 ---------A   03860     LET Z1=K(I,1)
    0x55b8aade5a70 ---------A   03870     LET Z2=K(I,2)
    0x55b8aade5ae0 ---------A   03880     GOSUB 10570
    0x55b8aade5b40 ---------A   03890     GOSUB 10430
    0x55b8aade5d60 ---------A   03900     LET K(I,1)=Z1
    0x55b8aade5f90 ---------A   03910     LET K(I,2)=Z2
    0x55b8aade6120 ---------A   03920     LET A$="+++"
    0x55b8aade6190 ---------A   03930     GOSUB 10570
    0x55b8aade6230 ---------A T 03940 NEXT I
    0x55b8aade62b0 ---------A   03950 GOSUB 9270
    0x55b8aade6490 ---------A   03960 LET D1=0
    0x55b8aade6640 ---------A   03970 LET D6=W1
    0x55b8aade67d0 ---------A   03980 IF W1<1 GOTO 4040
    0x55b8aade6970 ---------A   03990 LET D6=1
    0x55b8aade69e0 ---------A   04000 REM
    0x55b8aade6ad0 ---------A   04010 REM ===============================================================
    0x55b8aade6b50 ---------A   04020 REM
    0x55b8aade6bf0 ---------A   04030 REM MAKE REPAIRS TO SHIP
    0x55b8aade6e20 ---------A T 04040 FOR I=1 TO 8
    0x55b8aade7020 ---------A   04050     IF D(I)>=0 GOTO 4150
    0x55b8aade7340 ---------A   04060     LET D(I)=D(I)+6
    0x55b8aade7530 ---------A   04070     IF D(I)<0 GOTO 4150
    0x55b8aade7700 ---------A   04080     IF D1=1 GOTO 4110
    0x55b8aade78c0 ---------A   04090     LET D1=1
    0x55b8aade7a00 ---------A   04100     PRINT "DAMAGE CONTROL REPORT:"
    0x55b8aade7b90 ---------A T 04110     PRINT TAB(8);
    0x55b8aade7cc0 ---------A   04120     LET R1=I
    0x55b8aade7d40 ---------A   04130     GOSUB 10810
    0x55b8aade7e60 ---------A   04140     PRINT " REPAIR COMPLETED"
    0x55b8aade7f10 ---------A T 04150 NEXT I
    0x55b8aade7f90 ---------A   04160 REM
    0x55b8aade8080 ---------A   04170 REM ===============================================================
    0x55b8aade8100 ---------A   04180 REM
    0x55b8aade81b0 ---------A   04190 REM DAMAGE/IMPROVEMENT DURING SOME VES
    0x55b8aade8400 ---------A   04200 IF RND(1)>.2 GOTO 4400
    0x55b8aade8840 ---------A   04210 LET R1=INT(RND(1)*8+1)
    0x55b8aade8a70 ---------A   04220 IF RND(1)>=.6 GOTO 4300
    0x55b8aade8fe0 ---------A   04230 LET D(R1)=D(R1)-(RND(1)*5+1)
    0x55b8aade9120 ---------A   04240 PRINT " "
    0x55b8aade9280 ---------A   04250 PRINT "DAMAGE CONTROL REPORT:";
    0x55b8aade92f0 ---------A   04260 GOSUB 10810
    0x55b8aade9410 ---------A   04270 PRINT " DAMAGED"
    0x55b8aade9540 ---------A   04280 PRINT " "
    0x55b8aade95c0 ---------A   04290 GOTO 4400
    0x55b8aade9ae0 ---------A T 04300 LET D(R1)=D(R1)+(RND(1)*3+1)
    0x55b8aade9c20 ---------A   04310 PRINT " "
    0x55b8aade9d80 ---------A   04320 PRINT "DAMAGE CONTROL REPORT:";
    0x55b8aade9e00 ---------A   04330 GOSUB 10810
    0x55b8aade9f30 ---------A   04340 PRINT " STATE OF REPAIR IMPROVED"
    0x55b8aadea060 ---------A   04350 PRINT " "
    0x55b8aadea0d0 ---------A   04360 REM
    0x55b8aadea1c0 ---------A   04370 REM ===============================================================
    0x55b8aadea240 ---------A   04380 REM
    0x55b8aadea2e0 ---------A   04390 REM BEGIN MOVING STARSHIP **
    0x55b8aadea480 ---------A T 04400 LET A$="   "
    0x55b8aadea610 ---------A   04410 LET Z1=INT(S1)
    0x55b8aadea7a0 ---------A   04420 LET Z2=INT(S2)
    0x55b8aadea820 ---------A   04430 GOSUB 10570
    0x55b8aadeac60 ---------A   04440 LET X1=-SIN((C1-1)*P1)
    0x55b8aadead90 ---------A   04450 LET X=S1
    0x55b8aadeaf50 ---------A   04460 LET Y=S2
    0x55b8aadeb3a0 ---------A   04470 LET X2= COS((C1-1)*P1)
    0x55b8aadeb550 ---------A   04480 LET Q4=Q1
    0x55b8aadeb700 ---------A   04490 LET Q5=Q2
    0x55b8aadeb8d0 ---------A   04500 FOR I=1 TO N
    0x55b8aadebab0 ---------A   04510     LET S1=S1+X1
    0x55b8aadebc90 ---------A   04520     LET S2=S2+X2
    0x55b8aadebe20 ---------A   04530     IF S1<0.5 GOTO 4790
    0x55b8aadebff0 ---------A   04540     IF S1>=8.5 GOTO 4790
    0x55b8aadec1c0 ---------A   04550     IF S2<0.5 GOTO 4790
    0x55b8aadec390 ---------A   04560     IF S2>=8.5 GOTO 4790
    0x55b8aadecbe0 ---------A   04570     IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4630
    0x55b8aadecde0 ---------A   04580     LET S1=S1-X1
    0x55b8aadecfe0 ---------A   04590     LET S2=S2-X2
    0x55b8aaded320 ---------A   04600     PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
    0x55b8aaded700 ---------A   04610     PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
    0x55b8aaded770 ---------A   04620     GOTO 4640
    0x55b8aaded810 ---------A T 04630 NEXT I
    0x55b8aaded9b0 ---------A T 04640 LET A$="<*>"
    0x55b8aadedc20 ---------A   04650 S1=INT(S1+0.5)
    0x55b8aadede90 ---------A   04660 S2=INT(S2+0.5)
    0x55b8aadee020 ---------A   04670 LET Z1=INT(S1)
    0x55b8aadee1b0 ---------A   04680 LET Z2=INT(S2)
    0x55b8aadee220 ---------A   04690 GOSUB 10570
    0x55b8aadee280 ---------A   04700 GOSUB 9140
    0x55b8aadee470 ---------A   04710 LET T8=1
    0x55b8aadee600 ---------A   04720 IF W1>=1 GOTO 4740
    0x55b8aadee990 ---------A   04730 LET T8=.1*INT(10*W1)
    0x55b8aadeeb70 ---------A T 04740 LET T=T+T8
    0x55b8aadeed60 ---------A   04750 IF T>T0+T9 GOTO 7440
    0x55b8aadeee30 ---------A   04760 REM SEE IF DOCKED, THEN GET COMMAND
    0x55b8aadeeec0 ---------A   04770 GOTO 3140
    0x55b8aadeef30 ---------A   04780 REM EXCEEDED QUADRANT LIMITS
    0x55b8aadef330 ---------A T 04790 LET X=8*Q1+X+N*X1
    0x55b8aadef720 ---------A   04800 LET Y=8*Q2+Y+N*X2
    0x55b8aadef990 ---------A   04810 LET Q1=INT(X/8)
    0x55b8aadefc10 ---------A   04820 LET Q2=INT(Y/8)
    0x55b8aadeff30 ---------A   04830 LET S1=INT(X-Q1*8)
    0x55b8aadf0240 ---------A   04840 LET S2=INT(Y-Q2*8)
    0x55b8aadf0440 ---------A   04850 LET X5=0
    0x55b8aadf05d0 ---------A   04860 IF S1<>0 GOTO 4900
    0x55b8aadf0810 ---------A   04870 LET Q1=Q1-1
    0x55b8aadf0980 ---------A   04880 LET S1=8
    0x55b8aadf0b00 ---------A   04890 LET X5=0
    0x55b8aadf0c90 ---------A T 04900 IF S2<>0 GOTO 4940
    0x55b8aadf0ed0 ---------A   04910 LET Q2=Q2-1
    0x55b8aadf1040 ---------A   04920 LET S2=8
    0x55b8aadf11c0 ---------A   04930 LET X5=0
    0x55b8aadf1350 ---------A T 04940 IF Q1>=1 GOTO 4980
    0x55b8aadf14f0 ---------A   04950 LET X5=1
    0x55b8aadf1660 ---------A   04960 LET Q1=1
    0x55b8aadf17e0 ---------A   04970 LET S1=1
    0x55b8aadf1970 ---------A T 04980 IF Q1<=8 GOTO 5020
    0x55b8aadf1b10 ---------A   04990 LET X5=1
    0x55b8aadf1c80 ---------A   05000 LET Q1=8
    0x55b8aadf1e00 ---------A   05010 LET S1=8
    0x55b8aadf1f90 ---------A T 05020 IF Q2>=1 GOTO 5060
    0x55b8aadf2130 ---------A   05030 LET X5=1
    0x55b8aadf22a0 ---------A   05040 LET Q2=1
    0x55b8aadf2420 ---------A   05050 LET S2=1
    0x55b8aadf25b0 ---------A T 05060 IF Q2<=8 GOTO 5100
    0x55b8aadf2750 ---------A   05070 LET X5=1
    0x55b8aadf28c0 ---------A   05080 LET Q2=8
    0x55b8aadf2a30 ---------A   05090 LET S2=8
    0x55b8aadf2bc0 ---------A T 05100 IF X5=0 GOTO 5170
    0x55b8aadf2da0 ---------A   05110 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    0x55b8aadf2f30 ---------A   05120 PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    0x55b8aadf30b0 ---------A   05130 PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    0x55b8aadf3230 ---------A   05140 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    0x55b8aadf38f0 ---------A   05150 PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    0x55b8aadf3ae0 ---------A   05160 IF T>T0+T9 GOTO 7440
    0x55b8aadf3f70 ---------A T 05170 IF 8*Q1+Q2=8*Q4+Q5 GOTO 4640
    0x55b8aadf41b0 ---------A   05180 LET T=T+1
    0x55b8aadf4220 ---------A   05190 GOSUB 9140
    0x55b8aadf4280 ---------A   05200 GOTO 2450
    0x55b8aadf5240 ---------A   05210 REM
    0x55b8aadf5330 ---------A   05220 REM ===============================================================
    0x55b8aadf53b0 ---------A   05230 REM
    0x55b8aadf5450 ---------A   05240 REM L.R. SENSOR SCAN CODE ***
    0x55b8aadf56a0 ---------A T 05250 IF D(3)>=0 GOTO 5280
    0x55b8aadf5830 ---------A   05260 PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    0x55b8aadf58d0 ---------A   05270 GOTO 3150
    0x55b8aadf5bf0 ---------A T 05280 PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    0x55b8aadf5e00 ---------A   05290 LET O1$="..................."
    0x55b8aadf5ee0 ---------A   05300 PRINT O1$
    0x55b8aadf6240 ---------A   05310 FOR I=Q1-1 TO Q1+1
    0x55b8aadf62c0 ---------A   05320     REM    DIM N(3)
    0x55b8aadf6560 ---------A   05330     FOR I1=1 TO 3
    0x55b8aadf6740 ---------A   05340 	LET N(I1)=0
    0x55b8aadf67f0 ---------A   05350     NEXT I1
    0x55b8aadf6b60 ---------A   05360     FOR J=Q2-1 TO Q2+1
    0x55b8aadf6d00 ---------A   05370 	IF I<1 GOTO 5450
    0x55b8aadf6ec0 ---------A   05380 	IF I>8 GOTO 5450
    0x55b8aadf7080 ---------A   05390 	IF J<1 GOTO 5430
    0x55b8aadf7240 ---------A   05400 	IF J>8 GOTO 5430
    0x55b8aadf7660 ---------A   05410 	LET N(J-Q2+2)=G(I,J)
    0x55b8aadf7910 ---------A   05420 	LET Z(I,J)=G(I,J)
    0x55b8aadf79c0 ---------A T 05430     NEXTJ
    0x55b8aadf7a50 ---------A   05440     REM   DIM P1$(20)
    0x55b8aadf7ca0 ---------A T 05450     LET P1$=": ### : ### : ### :"
    0x55b8aadf80b0 ---------A   05460     PRINT USING P1$,N(1),N(2),N(3)
    0x55b8aadf8180 ---------A   05470     PRINT O1$
    0x55b8aadf8230 ---------A   05480 NEXT I
    0x55b8aadf82b0 ---------A   05490 GOTO 3150
    0x55b8aadf8310 ---------A   05500 REM
    0x55b8aadf8400 ---------A   05510 REM ===============================================================
    0x55b8aadf8480 ---------A   05520 REM
    0x55b8aadf8530 ---------A   05530 REM *** PHASER CONTROL CODE BEGINS HERE
    0x55b8aadf86d0 ---------A T 05540 IF K3>0 GOTO 5580
    0x55b8aadf88a0 ---------A   05550 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    0x55b8aadf89e0 ---------A   05560 PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    0x55b8aadf8a60 ---------A   05570 GOTO 3150
    0x55b8aadf8c80 ---------A T 05580 IF D(4)>=0 GOTO 5610
    0x55b8aadf8df0 ---------A   05590 PRINT "PHASERS INOPERATIVE"
    0x55b8aadf8e70 ---------A   05600 GOTO 3150
    0x55b8aadf9090 ---------A T 05610 IF D(8)>=0 GOTO 5630
    0x55b8aadf9240 ---------A   05620 PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    0x55b8aadf9390 ---------A T 05630 PRINT "PHASERS LOCKED ON TARGET;  "
    0x55b8aadf9550 ---------A T 05640 PRINT "ENERGY AVAILABLE ="E
    0x55b8aadf96b0 ---------A   05650 PRINT "NUMBER OF UNITS TO FIRE:";
    0x55b8aadf9780 ---------A   05660 INPUT X
    0x55b8aadf9920 ---------A   05670 IF X<=0 GOTO 3150
    0x55b8aadf9b90 ---------A   05680 IF E-X<0 GOTO 5640
    0x55b8aadf9d90 ---------A   05690 LET E=E-X
    0x55b8aadf9e10 ---------A   05700 GOSUB 9270
    0x55b8aadfa030 ---------A   05710 IF D(7)>=0 GOTO 5730
    0x55b8aadfa2d0 ---------A   05720 LET X=X*RND(1)
    0x55b8aadfa580 ---------A T 05730 LET H1=INT(X/K3)
    0x55b8aadfa7a0 ---------A   05740 FOR I=1 TO 3
    0x55b8aadfaa40 ---------A   05750     IF K(I,3)<=0 GOTO 5950
    0x55b8aadfb090 ---------A   05760     LET H=INT((H1/FND(0))*(RND(1)*2))
    0x55b8aadfb3c0 ---------A   05770     IF H>.15*K(I,3) GOTO 5810
    0x55b8aadfb570 ---------A   05780     PRINT "SENSORS SHOW NO DAMAGE"
    0x55b8aadfba80 ---------A   05790     PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
    0x55b8aadfbb00 ---------A   05800     GOTO 5950
    0x55b8aadfbef0 ---------A T 05810     LET K(I,3)=K(I,3)-H
    0x55b8aadfc4a0 ---------A   05820     PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
    0x55b8aadfc730 ---------A   05830     IF K(I,3)<=0 GOTO 5860
    0x55b8aadfcb20 ---------A   05840     PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
    0x55b8aadfcbb0 ---------A   05850     GOTO 5950
    0x55b8aadfcce0 ---------A T 05860     PRINT " *** KLINGON DESTROYED ***"
    0x55b8aadfcef0 ---------A   05870     LET K3=K3-1
    0x55b8aadfd100 ---------A   05880     LET K9=K9-1
    0x55b8aadfd290 ---------A   05890     A$="   "
    0x55b8aadfd4c0 ---------A   05900     LET Z1=K(I,1)
    0x55b8aadfd6f0 ---------A   05910     LET Z2=K(I,2)
    0x55b8aadfd770 ---------A   05920     GOSUB 10570
    0x55b8aadfdc60 ---------A   05930     LET G(Q1,Q2)=K3*100+B3*10+S3
    0x55b8aadfddf0 ---------A   05940     IF K9<=0 GOTO 7590
    0x55b8aadfded0 ---------A T 05950 NEXT I
    0x55b8aadfdf50 ---------A   05960 GOTO 3150
    0x55b8aadfdfb0 ---------A   05970 REM
    0x55b8aadfe0a0 ---------A   05980 REM ===============================================================
    0x55b8aadfe120 ---------A   05990 REM
    0x55b8aadfe1d0 ---------A   06000 REM PHOTON TORPEDO CODE BEGINS ***
    0x55b8aade1f10 ---------A T 06010 IF D(5)>=0 GOTO 6040
    0x55b8aade20a0 ---------A   06020 PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    0x55b8aade2110 ---------A   06030 GOTO 3150
    0x55b8aade2290 ---------A T 06040 IF P>0 GOTO 6070
    0x55b8aade2420 ---------A   06050 PRINT "ALL PHOTON TORPEDOES EXPENDED"
    0x55b8aade24a0 ---------A   06060 GOTO 3150
    0x55b8aade25e0 ---------A T 06070 PRINT "TORPEDO COURSE (1-9)";
    0x55b8aade26c0 ---------A   06080 INPUT C1
    0x55b8aade2860 ---------A   06090 IF C1>=1 GOTO 6120
    0x55b8aade2a10 ---------A T 06100 PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    0x55b8aade2a80 ---------A   06110 GOTO 3150
    0x55b8aade2c00 ---------A T 06120 IF C1>9 GOTO 6100
    0x55b8aae002d0 ---------A   06130 IF C1<9 GOTO 6160
    0x55b8aae004a0 ---------A   06140 IF C1>=9 GOTO 6070
    0x55b8aae00650 ---------A   06150 LET C1=1
    0x55b8aae009b0 ---------A T 06160 LET X1=-SIN((C1-1)*P1)
    0x55b8aae00d10 ---------A   06170 LET X2= COS((C1-1)*P1)
    0x55b8aae00fc0 ---------A   06180 IF ABS(X1)<ABS(X2) THEN 6230
    0x55b8aae012c0 ---------A   06190 M9=ABS(1/X1)
    0x55b8aae014d0 ---------A   06200 X1=SGN(X1)
    0x55b8aae016a0 ---------A   06210 X2=X2*M9
    0x55b8aae01710 ---------A   06220 GOTO 6260
    0x55b8aae01970 ---------A T 06230 M9=ABS(1/X2)
    0x55b8aae01b00 ---------A   06240 X2=SGN(X2)
    0x55b8aae01cd0 ---------A   06250 X1=X1*M9
    0x55b8aae01ee0 ---------A T 06260 LET E=E-2
    0x55b8aae02010 ---------A   06270 LET X=S1
    0x55b8aae02140 ---------A   06280 LET Y=S2
    0x55b8aae02360 ---------A   06290 LET P=P-1
    0x55b8aae02490 ---------A   06300 PRINT "TORPEDO TRACK:"
    0x55b8aae02660 ---------A T 06310 LET X=X+X1
    0x55b8aae02830 ---------A   06320 LET Y=Y+X2
    0x55b8aae02b20 ---------A   06330 LET X9=INT(X+.5)
    0x55b8aae02e10 ---------A   06340 LET Y9=INT(Y+.5)
    0x55b8aae02fa0 ---------A   06350 IF X9<1 GOTO 6880
    0x55b8aae03170 ---------A   06360 IF X9>=9 GOTO 6880
    0x55b8aae03330 ---------A   06370 IF Y9<1 GOTO 6880
    0x55b8aae03500 ---------A   06380 IF Y9>=9 GOTO 6880
    0x55b8aae03850 ---------A   06390 PRINT "               "X9","Y9
    0x55b8aae039e0 ---------A   06400 LET A$="   "
    0x55b8aae03b10 ---------A   06410 LET Z1=X9
    0x55b8aae03c40 ---------A   06420 LET Z2=Y9
    0x55b8aae03cc0 ---------A   06430 GOSUB 10880
    0x55b8aae03ec0 ---------A   06440 IF Z3<>0 GOTO 6310
    0x55b8aae04080 ---------A   06450 LET A$="+++"
    0x55b8aae041b0 ---------A   06460 LET Z1=X9
    0x55b8aae042e0 ---------A   06470 LET Z2=Y9
    0x55b8aae04350 ---------A   06480 GOSUB 10880
    0x55b8aae044d0 ---------A   06490 IF Z3=0 GOTO 6600
    0x55b8aae04650 ---------A   06500 PRINT "*** KLINGON DESTROYED ***"
    0x55b8aae04860 ---------A   06510 LET K3=K3-1
    0x55b8aae04a80 ---------A   06520 LET K9=K9-1
    0x55b8aae04c10 ---------A   06530 IF K9<=0 GOTO 7590
    0x55b8aae04e60 ---------A   06540 FOR I=1 TO 3
    0x55b8aae050c0 ---------A   06550     IF X9<>K(I,1) GOTO 6570
    0x55b8aae05350 ---------A   06560     IF Y9=K(I,2) GOTO 6580
    0x55b8aae05430 ---------A T 06570 NEXT I
    0x55b8aae056b0 ---------A T 06580 LET K(I,3)=0
    0x55b8aae05720 ---------A   06590 GOTO 6820
    0x55b8aae058a0 ---------A T 06600 LET A$=" * "
    0x55b8aae059d0 ---------A   06610 LET Z1=X9
    0x55b8aae05b00 ---------A   06620 LET Z2=Y9
    0x55b8aae05b70 ---------A   06630 GOSUB 10880
    0x55b8aae05cf0 ---------A   06640 IF Z3=0 GOTO 6670
    0x55b8aae06150 ---------A   06650 PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    0x55b8aae061c0 ---------A   06660 GOTO 6890
    0x55b8aae06340 ---------A T 06670 LET A$=">!<"
    0x55b8aae06470 ---------A   06680 LET Z1=X9
    0x55b8aae065a0 ---------A   06690 LET Z2=Y9
    0x55b8aae06610 ---------A   06700 GOSUB 10880
    0x55b8aae06790 ---------A   06710 IF Z3=0 GOTO 6070
    0x55b8aae06920 ---------A   06720 PRINT "*** STARBASE DESTROYED ***"
    0x55b8aae06b30 ---------A   06730 LET B3=B3-1
    0x55b8aae06d40 ---------A   06740 LET B9=B9-1
    0x55b8aae06ed0 ---------A   06750 IF B9>0 GOTO 6790
    0x55b8aae070e0 ---------A   06760 PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    0x55b8aae07240 ---------A   06770 PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    0x55b8aae072e0 ---------A   06780 GOTO 7490
    0x55b8aae07430 ---------A T 06790 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    0x55b8aae07560 ---------A   06800 PRINT "   COURT MARTIAL!"
    0x55b8aae076d0 ---------A   06810 LET D0=0
    0x55b8aae07860 ---------A T 06820 LET A$="   "
    0x55b8aae07990 ---------A   06830 LET Z1=X9
    0x55b8aae07ac0 ---------A   06840 LET Z2=Y9
    0x55b8aae07b40 ---------A   06850 GOSUB 10570
    0x55b8aae08020 ---------A   06860 LET G(Q1,Q2)=K3*100+B3*10+S3
    0x55b8aae080a0 ---------A   06870 GOTO 6890
    0x55b8aae081c0 ---------A T 06880 PRINT "TORPEDO MISSED"
    0x55b8aae08230 ---------A T 06890 GOSUB 9270
    0x55b8aae08290 ---------A   06900 GOTO 3150
    0x55b8aae082f0 ---------A   06910 REM
    0x55b8aae083e0 ---------A   06920 REM ===============================================================
    0x55b8aae08460 ---------A   06930 REM
    0x55b8aae08510 ---------A   06940 REM *** SHIELD CONTROL STARTS HERE
    0x55b8aae08760 ---------A T 06950 IF D(7)>=0 GOTO 6980
    0x55b8aae088e0 ---------A   06960 PRINT "SHIELD CONTROL INOPERABLE"
    0x55b8aae08980 ---------A   06970 GOTO 3150
    0x55b8aae08d10 ---------A T 06980 PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    0x55b8aae08de0 ---------A   06990 INPUT X
    0x55b8aae08f80 ---------A   07000 IF X>=0 GOTO 7040
    0x55b8aae09100 ---------A   07010 IF S<>X GOTO 7040
    0x55b8aae09270 ---------A   07020 PRINT "(SHIELDS UNCHANGED)"
    0x55b8aae092f0 ---------A   07030 GOTO 3150
    0x55b8aae095b0 ---------A T 07040 IF E+S-X<0 GOTO 6980
    0x55b8aae09850 ---------A   07050 LET E=E+S-X
    0x55b8aae099a0 ---------A   07060 LET S=X
    0x55b8aae09b00 ---------A   07070 PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    0x55b8aae09d90 ---------A   07080 PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    0x55b8aae09e00 ---------A   07090 GOTO 3150
    0x55b8aae09e60 ---------A   07100 REM
    0x55b8aae09f50 ---------A   07110 REM ===============================================================
    0x55b8aae09fd0 ---------A   07120 REM
    0x55b8aae0a080 ---------A   07130 REM *** DAMAGE CONTROL STARTS HERE
    0x55b8aae0a2d0 ---------A T 07140 IF D(6)>=0 GOTO 7360
    0x55b8aae0a460 ---------A   07150 PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    0x55b8aae0a5f0 ---------A T 07160 IF D0=0 GOTO 3150
    0x55b8aae0a810 ---------A   07170 LET D3=0
    0x55b8aae0aa30 ---------A   07180 FOR I=1 TO 8
    0x55b8aae0ac30 ---------A   07190     IF D(I)>=0 GOTO 7210
    0x55b8aae0ae70 ---------A   07200     LET D3=D3+.1
    0x55b8aae0af20 ---------A T 07210 NEXT I
    0x55b8aae0b0c0 ---------A   07220 IF D3=0 GOTO 3150
    0x55b8aae0b2c0 ---------A   07230 LET D3=D3+D4
    0x55b8aae0b450 ---------A   07240 IF D3<1 GOTO 7260
    0x55b8aae0b620 ---------A   07250 LET D3=.9
    0x55b8aae0b7a0 ---------A T 07260 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    0x55b8aae0b910 ---------A   07270 PRINT "ESTIMATED TIME TO REPAIR: ";
    0x55b8aae0baf0 ---------A   07280 PRINT USING ".# STARDATES",D3
    0x55b8aae0bc60 ---------A   07290 PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    0x55b8aae0bd40 ---------A   07300 INPUT A$
    0x55b8aae0bf00 ---------A   07310 IF A$<>"YES" GOTO 3150
    0x55b8aae0c140 ---------A   07320 FOR I=1 TO 8
    0x55b8aae0c320 ---------A   07330     LET D(I)=0
    0x55b8aae0c3d0 ---------A   07340 NEXT I
    0x55b8aae0c690 ---------A   07350 LET T=T+D3+.1
    0x55b8aae0c7e0 ---------A T 07360 PRINT " "
    0x55b8aae0c920 ---------A   07370 PRINT "DEVICE        STATE OF REPAIR"
    0x55b8aae0cb30 ---------A   07380 FOR R1=1 TO 8
    0x55b8aae0cbc0 ---------A   07390     GOSUB 10810
    0x55b8aae0cdc0 ---------A   07400     PRINT USING "  -##.##",D(R1)
    0x55b8aae0ce70 ---------A   07410 NEXT R1
    0x55b8aae0cfb0 ---------A   07420 PRINT " "
    0x55b8aae0d020 ---------A   07430 GOTO 7160
    0x55b8aae10790 ---------A T 07440 PRINT "ITS IS STARDATE "T
    0x55b8aae10800 ---------A   07450 GOTO 7490
    0x55b8aae10960 ---------A T 07460 PRINT " "
    0x55b8aae10ad0 ---------A   07470 PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    0x55b8aae10d90 ---------A   07480 PRINT "IT IS STARDATE "T"."
    0x55b8aae11040 ---------A T 07490 PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    0x55b8aae11180 ---------A   07500 PRINT "THE END OF YOUR MISSION."
    0x55b8aae112b0 ---------A T 07510 PRINT " "
    0x55b8aae11410 ---------A   07520 PRINT " "
    0x55b8aae11590 ---------A   07530 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    0x55b8aae11700 ---------A   07540 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    0x55b8aae11840 ---------A   07550 PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    0x55b8aae11920 ---------A   07560 INPUT A$
    0x55b8aae11ae0 ---------A   07570 IF A$="AYE" GOTO 1270
    0x55b8aae11bc0 ---------A   07580 GOTO 9120
    0x55b8aae11d40 ---------A T 07590 PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    0x55b8aae11e90 ---------A   07600 PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    0x55b8aae11ff0 ---------A   07610 PRINT " "
    0x55b8aae12570 ---------A   07620 PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    0x55b8aae125e0 ---------A   07630 GOTO 7510
    0x55b8aae1c4a0 ---------A   07640 REM
    0x55b8aae1c590 ---------A   07650 REM ===============================================================
    0x55b8aae1c610 ---------A   07660 REM
    0x55b8aae1c6d0 ---------A   07670 REM *** LIBARY COMPUTER CODE BEGINS HERE
    0x55b8aae1c920 ---------A T 07680 IF D(8)>=0 GOTO 7710
    0x55b8aae1ca90 ---------A   07690 PRINT "COMPUTER DISABLED"
    0x55b8aae1cb20 ---------A   07700 GOTO 3150
    0x55b8aae1cc70 ---------A T 07710 PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    0x55b8aae1cdc0 ---------A   07720 INPUT A
    0x55b8aae1cf60 ---------A   07730 IF A<0 GOTO 3150
    0x55b8aae1d000 ---------A   07740 PRINT
    0x55b8aae1d1f0 ---------A   07750 LET H8=1
    0x55b8aae1d380 ---------A   07760 IF A=0 GOTO 8000
    0x55b8aae1d540 ---------A   07770 IF A>5 GOTO 7880
    0x55b8aae1d5e0 ---------A   07780 REM
    0x55b8aae1d6d0 ---------A   07790 REM ===============================================================
    0x55b8aae1d750 ---------A   07800 REM
    0x55b8aae1db70 ---------A   07810 ON A GOTO 8420, 8620, 9050, 8700, 7840
    0x55b8aae1dbe0 ---------A   07820 REM  GOTO 9150
    0x55b8aae1dca0 ---------A   07830 REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP
    0x55b8aae1de20 ---------A T 07840 LET H8=0
    0x55b8aae1dfb0 ---------A   07850 LET G5=1
    0x55b8aae1e0f0 ---------A   07860 PRINT "                      THE GALAXY"
    0x55b8aae1e180 ---------A   07870 GOTO 8010
    0x55b8aae1e2e0 ---------A T 07880 PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    0x55b8aae1e430 ---------A   07890 PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    0x55b8aae1e580 ---------A   07900 PRINT "   1 = STATUS REPORT"
    0x55b8aae1e6e0 ---------A   07910 PRINT "   2 = PHOTON TORPEDO DATA"
    0x55b8aae1e840 ---------A   07920 PRINT "   3 = STARBASE NAVIGATION DATA"
    0x55b8aae1e9a0 ---------A   07930 PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    0x55b8aae1eae0 ---------A   07940 PRINT "   5 = GALAXY 'REGION NAME' MAP"
    0x55b8aae1eb50 ---------A   07950 GOTO 7710
    0x55b8aae1ebb0 ---------A   07960 REM
    0x55b8aae1eca0 ---------A   07970 REM ===============================================================
    0x55b8aae1ed20 ---------A   07980 REM
    0x55b8aae1ede0 ---------A   07990 REM *** CUM GALACTIC RECORD CODE BEGINS ***
    0x55b8aae1f260 ---------A T 08000 PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    0x55b8aae1f3e0 ---------A T 08010 PRINT "      1     2     3     4     5     6     7     8"
    0x55b8aae1f610 ---------A   08020 LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    0x55b8aae1f6f0 ---------A   08030 PRINT O3$
    0x55b8aae1f770 ---------A   08040 REM   DIM N1$(2),N2$(8),N$(5)
    0x55b8aae1f990 ---------A   08050 FOR I=1 TO 8
    0x55b8aae1fbc0 ---------A   08060     LET N1$="##"
    0x55b8aae1fd20 ---------A   08070     PRINT USING N1$,I;
    0x55b8aae1ffa0 ---------A   08080     PRINT TAB(3);"|";
    0x55b8aae20130 ---------A   08090     IF H8=0 GOTO 8210
    0x55b8aae20380 ---------A   08100     FOR J=1 TO 8
    0x55b8aae205a0 ---------A   08110 	    LET N2$=" ### |"
    0x55b8aae207c0 ---------A   08120 	    LET N$=""
    0x55b8aae20910 ---------A   08130 	    IF I<>Q1 GOTO 8170
    0x55b8aae20aa0 ---------A   08140 	    IF J<>Q2 GOTO 8170
    0x55b8aae20cb0 ---------A   08150 	    LET N$=CHR$(7)
    0x55b8aae20db0 ---------A   08160 	    PRINT N$;
    0x55b8aae20fc0 ---------A T 08170 	    PRINT USING N2$,Z(I,J);
    0x55b8aae210b0 ---------A   08180 	    PRINT N$;
    0x55b8aae21160 ---------A   08190     NEXT J
    0x55b8aae211e0 ---------A   08200     GOTO 8340
    0x55b8aae21300 ---------A T 08210     LET Z4=I
    0x55b8aae21470 ---------A   08220     LET Z5=1
    0x55b8aae214f0 ---------A   08230     GOSUB 10990
    0x55b8aae21920 ---------A   08240     LET J0=INT(15-.5*LEN(G2$))
    0x55b8aae21a70 ---------A   08250     PRINT  TAB(J0);
    0x55b8aae21b70 ---------A   08260     PRINT G2$;
    0x55b8aae21de0 ---------A   08270     PRINT TAB(27);"|";
    0x55b8aae21f50 ---------A   08280     LET Z5=5
    0x55b8aae21fd0 ---------A   08290     GOSUB 10990
    0x55b8aae22380 ---------A   08300     LET J0=INT(39-.5*LEN(G2$))
    0x55b8aae224d0 ---------A   08310     PRINT  TAB(J0);
    0x55b8aae225d0 ---------A   08320     PRINT G2$;
    0x55b8aae22840 ---------A   08330     PRINT TAB(51);"|";
    0x55b8aae228b0 ---------A T 08340     PRINT
    0x55b8aae22980 ---------A   08350     PRINT O3$
    0x55b8aae22a30 ---------A   08360 NEXT I
    0x55b8aae22ab0 ---------A   08370 GOTO 3150
    0x55b8aae22b10 ---------A   08380 REM
    0x55b8aae22c00 ---------A   08390 REM ===============================================================
    0x55b8aae22c80 ---------A   08400 REM
    0x55b8aae22d40 ---------A   08410 REM *** STATUS REPORT CODE BEGINS HERE ***
    0x55b8aae22e90 ---------A T 08420 PRINT "   STATUS REPORT:"
    0x55b8aae23020 ---------A   08430 LET X$=""
    0x55b8aae231b0 ---------A   08440 IF K9=1 GOTO 8460
    0x55b8aae23380 ---------A   08450 LET X$="S"
    0x55b8aae23690 ---------A T 08460 PRINT K9" KLINGON"X$" LEFT"
    0x55b8aae239f0 ---------A   08470 LET V5=(T0+T9)-T
    0x55b8aae23bc0 ---------A   08480 PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    0x55b8aae23d50 ---------A   08490 LET X$=""
    0x55b8aae23ee0 ---------A   08500 IF B9=1 GOTO 8560
    0x55b8aae240b0 ---------A   08510 LET X$="S"
    0x55b8aae24240 ---------A   08520 IF B9<>0 GOTO 8560
    0x55b8aae24420 ---------A   08530 PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    0x55b8aae24570 ---------A   08540 PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    0x55b8aae24620 ---------A   08550 GOTO 7140
    0x55b8aae24a10 ---------A T 08560 PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    0x55b8aae24a80 ---------A   08570 GOTO 7140
    0x55b8aae24ae0 ---------A   08580 REM
    0x55b8aae24bd0 ---------A   08590 REM ===============================================================
    0x55b8aae24c50 ---------A   08600 REM
    0x55b8aae24d20 ---------A   08610 REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***
    0x55b8aae24ea0 ---------A T 08620 LET H8=0
    0x55b8aae250c0 ---------A   08630 FOR I=1 TO 3
    0x55b8aae25360 ---------A   08640     IF K(I,3)<=0 GOTO 9030
    0x55b8aae255c0 ---------A   08650     LET W1=K(I,1)
    0x55b8aae257f0 ---------A   08660     LET X=K(I,2)
    0x55b8aae25920 ---------A T 08670     LET C1=S1
    0x55b8aae25a50 ---------A   08680     LET A=S2
    0x55b8aae25ae0 ---------A   08690     GOTO8770
    0x55b8aae25c40 ---------A T 08700     PRINT "DIRECTION/DISTANCE CALCULATOR:"
    0x55b8aae26300 ---------A   08710     PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
    0x55b8aae26450 ---------A   08720     PRINT "PLEASE ENTER --"
    0x55b8aae265b0 ---------A   08730     PRINT "  INITIAL COORDINATES (X,Y)";
    0x55b8aae26700 ---------A   08740     INPUT C1,A
    0x55b8aae26870 ---------A   08750     PRINT "  FINAL COORDINATES (X,Y)";
    0x55b8aae269a0 ---------A   08760     INPUT W1,X
    0x55b8aae26b80 ---------A T 08770     LET X=X-A
    0x55b8aae26d60 ---------A   08780     LET A=C1-W1
    0x55b8aae26ef0 ---------A   08790     IF X<0 GOTO 8900
    0x55b8aae270c0 ---------A   08800     IF A<0 GOTO 8960
    0x55b8aae27290 ---------A   08810     IF X>0 GOTO 8830
    0x55b8aae27460 ---------A   08820     IF A=0 GOTO 8920
    0x55b8aae27610 ---------A T 08830     LET C1=1
    0x55b8aae27820 ---------A T 08840     IF ABS(A)<=ABS(X) GOTO 8880
    0x55b8aae27e70 ---------A   08850     LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
    0x55b8aae28020 ---------A   08860     PRINT "DIRECTION ="V5
    0x55b8aae280b0 ---------A   08870     GOTO 9010
    0x55b8aae28490 ---------A T 08880     PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
    0x55b8aae28510 ---------A   08890     GOTO 9010
    0x55b8aae28690 ---------A T 08900     IF A>0 GOTO 8940
    0x55b8aae28860 ---------A   08910     IF X=0 GOTO 8960
    0x55b8aae28a00 ---------A T 08920     LET C1=5
    0x55b8aae28a70 ---------A   08930     GOTO 8840
    0x55b8aae28bd0 ---------A T 08940     LET C1=3
    0x55b8aae28c40 ---------A   08950     GOTO 8970
    0x55b8aae28db0 ---------A T 08960     LET C1=7
    0x55b8aae28fc0 ---------A T 08970     IF ABS(A)>=ABS(X) GOTO 9000
    0x55b8aae29690 ---------A   08980     PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
    0x55b8aae29720 ---------A   08990     GOTO 9010
    0x55b8aae29b20 ---------A T 09000     PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
    0x55b8aae29fa0 ---------A T 09010     PRINT "DISTANCE ="SQR(X^2+A^2)
    0x55b8aae2a130 ---------A   09020     IF H8=1 GOTO 3150
    0x55b8aae2a210 ---------A T 09030 NEXT I
    0x55b8aae2a2a0 ---------A   09040 GOTO 3150
    0x55b8aae2a420 ---------A T 09050 IF B3<>0 GOTO 9080
    0x55b8aae2a5f0 ---------A   09060 PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    0x55b8aae2a680 ---------A   09070 GOTO 3150
    0x55b8aae2a7b0 ---------A T 09080 PRINT "FROM ENTERPRISE TO STARBASE:"
    0x55b8aae2a8e0 ---------A   09090 LET W1=B4
    0x55b8aae2aa10 ---------A   09100 LET X=B5
    0x55b8aae2aaa0 ---------A   09110 GOTO 8670
    0x55b8aae31730 ---------A T 09120 STOP
    0x55b8aae3d1a0 ---------A   09130 END
    0x55b8aae558f0 ---------B G 09140 GOTO 9190 (Pseudo Goto)
    0x55b8aadf42e0 ---------B   09150 REM
    0x55b8aadf43d0 ---------B   09160 REM ===============================================================
    0x55b8aadf4450 ---------B   09170 REM
    0x55b8aadf44f0 ---------B   09180 REM MANEUVER ENERGY S/R ***
    0x55b8aadf47b0 ---------B T 09190 LET E=E-N-10
    0x55b8aadf4940 ---------B   09200 IF E>=0 GOTO 9260
    0x55b8aadf4b00 ---------B   09210 PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    0x55b8aadf4cd0 ---------B   09220 LET S=S+E
    0x55b8aadf4e40 ---------B   09230 LET E=0
    0x55b8aadf4fd0 ---------B   09240 IF S>0 GOTO 9260
    0x55b8aadf5170 ---------B   09250 LET S=0
    0x55b8aadf51c0 ---------B T 09260 RETURN
    0x55b8aae559d0 ---------C G 09270 GOTO 9320 (Pseudo Goto)
    0x55b8aae0d080 ---------C   09280 REM
    0x55b8aae0d170 ---------C   09290 REM ===============================================================
    0x55b8aae0d1f0 ---------C   09300 REM
    0x55b8aae0d2a0 ---------C   09310 REM "KLINGONS SHOOTING" CODE BEGINS ***
    0x55b8aae0d450 ---------C T 09320 IF K3<=0 GOTO 9530
    0x55b8aae0d610 ---------C   09330 IF D0=0 GOTO 9360
    0x55b8aae0d7b0 ---------C   09340 PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    0x55b8aae0d820 ---------C   09350 GOTO 9530
    0x55b8aae0da30 ---------C T 09360 FOR I=1 TO 3
    0x55b8aae0dcd0 ---------C   09370     IF K(I,3)<=0 GOTO 9520
    0x55b8aae0e390 ---------C   09380     LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
    0x55b8aae0e590 ---------C   09390     LET S=S-H
    0x55b8aae0eb40 ---------C   09400     PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
    0x55b8aae0ecd0 ---------C   09410     IF S<0 GOTO 9530
    0x55b8aae0efd0 ---------C   09420     PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
    0x55b8aae0f160 ---------C   09430     IF H<20 GOTO 9520
    0x55b8aae0f3d0 ---------C   09440     IF RND(1)>.6 GOTO 9520
    0x55b8aae0f640 ---------C   09450     IF H/S<=.02 GOTO 9520
    0x55b8aae0fb00 ---------C   09460     LET D2=H/S+.5*RND(1)
    0x55b8aae0ff00 ---------C   09470     LET R1=INT(RND(1)*8+1)
    0x55b8aae101b0 ---------C   09480     LET D(R1)=D(R1)-D2
    0x55b8aae10310 ---------C   09490     PRINT "DAMAGE CONTROL REPORTS '";
    0x55b8aae10390 ---------C   09500     GOSUB 10810
    0x55b8aae104b0 ---------C   09510     PRINT " DAMAGED BY THE HIT!'"
    0x55b8aae10560 ---------C T 09520 NEXT I
    0x55b8aae105c0 ---------C T 09530 RETURN
    0x55b8aae55ab0 ---------D G 09540 GOTO 9590 (Pseudo Goto)
    0x55b8aae12640 ---------D   09550 REM
    0x55b8aae12730 ---------D   09560 REM ===============================================================
    0x55b8aae127b0 ---------D   09570 REM
    0x55b8aae12870 ---------D   09580 REM S.R. SENSOR SCAN & STARTUP SUBR. ***
    0x55b8aae12bf0 ---------D T 09590 FOR I=S1-1 TO S1+1
    0x55b8aae12f60 ---------D   09600     FOR J=S2-1 TO S2+1
    0x55b8aae13240 ---------D   09610 	IF INT(I+.5)<1 GOTO 9700
    0x55b8aae13550 ---------D   09620 	IF INT(I+.5)>8 GOTO 9700
    0x55b8aae13860 ---------D   09630 	IF INT(J+.5)<1 GOTO 9700
    0x55b8aae13b70 ---------D   09640 	IF INT(J+.5)>8 GOTO 9700
    0x55b8aae13d30 ---------D   09650 	LET A$=">!<"
    0x55b8aae13e60 ---------D   09660 	LET Z1=I
    0x55b8aae13f90 ---------D   09670 	LET Z2=J
    0x55b8aae14010 ---------D   09680 	GOSUB 10880
    0x55b8aae14190 ---------D   09690 	IF Z3=1 GOTO 9740
    0x55b8aae14270 ---------D T 09700     NEXT J
    0x55b8aae14330 ---------D   09710 NEXT I
    0x55b8aae144b0 ---------D   09720 LET D0=0
    0x55b8aae14520 ---------D   09730 GOTO 9810
    0x55b8aae14680 ---------D T 09740 LET D0=1
    0x55b8aae14890 ---------D   09750 LET C$="DOCKED"
    0x55b8aae14a00 ---------D   09760 LET E=3000
    0x55b8aae14b90 ---------D   09770 LET P=10
    0x55b8aae14cd0 ---------D   09780 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    0x55b8aae14e40 ---------D   09790 LET S=0
    0x55b8aae14eb0 ---------D   09800 GOTO 9880
    0x55b8aae15030 ---------D T 09810 IF K3>0 GOTO 9850
    0x55b8aae152a0 ---------D   09820 IF E<E0*.1 GOTO 9870
    0x55b8aae15460 ---------D   09830 LET C$=" GREEN"
    0x55b8aae154e0 ---------D   09840 GOTO 9880
    0x55b8aae159e0 ---------D T 09850 C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    0x55b8aae15a50 ---------D   09860 GOTO 9880
    0x55b8aae15be0 ---------D T 09870 LET C$="YELLOW"
    0x55b8aae15e10 ---------D T 09880 IF D(2)>=0 GOTO 9930
    0x55b8aae15f90 ---------D   09890 PRINT " "
    0x55b8aae160d0 ---------D   09900 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    0x55b8aae16200 ---------D   09910 PRINT " "
    0x55b8aae16290 ---------D   09920 GOTO 10420
    0x55b8aae16420 ---------D T 09930 LET O1$="--------------------------------"
    0x55b8aae164f0 ---------D   09940 PRINT O1$
    0x55b8aae16700 ---------D   09950 LET N5$="####"
    0x55b8aae16860 ---------D   09960 PRINT " ";
    0x55b8aae16b20 ---------D   09970 FOR I=1 TO 22 STEP 3
    0x55b8aae16f00 ---------D   09980     PRINT MID$(Q$(1),I,3)" ";
    0x55b8aae16fb0 ---------D   09990 NEXT I
    0x55b8aae170f0 ---------D   10000 PRINT " "
    0x55b8aae17250 ---------D   10010 PRINT " ";
    0x55b8aae17510 ---------D   10020 FOR I=1 TO 22 STEP 3
    0x55b8aae178f0 ---------D   10030     PRINT MID$(Q$(2),I,3)" ";
    0x55b8aae179a0 ---------D   10040 NEXT I
    0x55b8aae17b40 ---------D   10050 PRINT "        STARDATE         ";
    0x55b8aae17cf0 ---------D   10060 PRINT USING "####.#",T
    0x55b8aae17e50 ---------D   10070 PRINT " ";
    0x55b8aae18110 ---------D   10080 FOR I=1 TO 22 STEP 3
    0x55b8aae184f0 ---------D   10090     PRINT MID$(Q$(3),I,3)" ";
    0x55b8aae185a0 ---------D   10100 NEXT I
    0x55b8aae18730 ---------D   10110 PRINT "        CONDITION        ";
    0x55b8aae18800 ---------D   10120 PRINT C$
    0x55b8aae18960 ---------D   10130 PRINT " ";
    0x55b8aae18c20 ---------D   10140 FOR I=1 TO 22 STEP 3
    0x55b8aae19000 ---------D   10150     PRINT MID$(Q$(4),I,3)" ";
    0x55b8aae190b0 ---------D   10160 NEXT I
    0x55b8aae19400 ---------D   10170 PRINT "        QUADRANT         "Q1","Q2
    0x55b8aae19560 ---------D   10180 PRINT " ";
    0x55b8aae19820 ---------D   10190 FOR I=1 TO 22 STEP 3
    0x55b8aae19c00 ---------D   10200     PRINT MID$(Q$(5),I,3)" ";
    0x55b8aae19cb0 ---------D   10210 NEXT I
    0x55b8aae1a000 ---------D   10220 PRINT "        SECTOR           "S1","S2
    0x55b8aae1a160 ---------D   10230 PRINT " ";
    0x55b8aae1a420 ---------D   10240 FOR I=1 TO 22 STEP 3
    0x55b8aae1a800 ---------D   10250     PRINT MID$(Q$(6),I,3)" ";
    0x55b8aae1a8b0 ---------D   10260 NEXT I
    0x55b8aae1aa50 ---------D   10270 PRINT "        TOTAL ENERGY     ";
    0x55b8aae1ac20 ---------D   10280 PRINT USING N5$,E+S
    0x55b8aae1ad80 ---------D   10290 PRINT " ";
    0x55b8aae1b040 ---------D   10300 FOR I=1 TO 22 STEP 3
    0x55b8aae1b420 ---------D   10310     PRINT MID$(Q$(7),I,3)" ";
    0x55b8aae1b4d0 ---------D   10320 NEXT I
    0x55b8aae1b660 ---------D   10330 PRINT "        PHOTON TORPEDOES ";
    0x55b8aae1b790 ---------D   10340 PRINT USING N5$,P
    0x55b8aae1b8f0 ---------D   10350 PRINT " ";
    0x55b8aae1bbb0 ---------D   10360 FOR I=1 TO 22 STEP 3
    0x55b8aae1bf90 ---------D   10370     PRINT MID$(Q$(8),I,3)" ";
    0x55b8aae1c040 ---------D   10380 NEXT I
    0x55b8aae1c1d0 ---------D   10390 PRINT "        SHIELDS          ";
    0x55b8aae1c300 ---------D   10400 PRINT USING N5$,S
    0x55b8aae1c3d0 ---------D   10410 PRINT O1$
    0x55b8aae1c420 ---------D T 10420 RETURN
    0x55b8aae55b90 ---------E G 10430 GOTO 10490 (Pseudo Goto)
    0x55b8aae2ab10 ---------E   10440 REM *** END OF LIBRARY-COMPUTER CODE
    0x55b8aae2ab90 ---------E   10450 REM
    0x55b8aae2ac80 ---------E   10460 REM ===============================================================
    0x55b8aae2ad00 ---------E   10470 REM
    0x55b8aae2adb0 ---------E   10480 REM S/R FINDS RANDOM HOLE IN QUADRANT
    0x55b8aae2b1d0 ---------E T 10490 LET R1=INT(RND(1)*8+1)
    0x55b8aae2b5c0 ---------E   10500 LET R2=INT(RND(1)*8+1)
    0x55b8aae2b750 ---------E   10510 LET A$="   "
    0x55b8aae2b880 ---------E   10520 LET Z1=R1
    0x55b8aae2b9b0 ---------E   10530 LET Z2=R2
    0x55b8aae2ba30 ---------E   10540 GOSUB 10880
    0x55b8aae2bbb0 ---------E   10550 IF Z3=0 GOTO 10490
    0x55b8aae2bc30 ---------E   10560 RETURN
    0x55b8aae55c50 ---------F G 10570 GOTO 10620 (Pseudo Goto)
    0x55b8aae2bcb0 ---------F   10580 REM
    0x55b8aae2bda0 ---------F   10590 REM ===============================================================
    0x55b8aae2be20 ---------F   10600 REM
    0x55b8aae2bef0 ---------F   10610 REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***
    0x55b8aae2c170 ---------F T 10620 Z1 = INT(Z1+.5)
    0x55b8aae2c3f0 ---------F   10630 Z2 = INT(Z2+.5)
    0x55b8aae2c580 ---------F   10640 IF Z1<1 GOTO 10760
    0x55b8aae2c750 ---------F   10650 IF Z1>8 GOTO 10760
    0x55b8aae2c920 ---------F   10660 IF Z2<1 GOTO 10760
    0x55b8aae2caf0 ---------F   10670 IF Z2>8 GOTO 10760
    0x55b8aae2cea0 ---------F   10680 DIM Q9(24), A9(3)
    0x55b8aae2d080 ---------F   10690 CHANGE Q$(Z1) TO Q9
    0x55b8aae2d230 ---------F   10700 CHANGE A$ TO A9
    0x55b8aae2d4f0 ---------F   10710 FOR I8 = 1 TO 3
    0x55b8aae2d990 ---------F   10720     Q9(3*(Z2-1) + I8) = A9(I8)
    0x55b8aae2da40 ---------F   10730 NEXT I8
    0x55b8aae2dbd0 ---------F   10740 CHANGE Q9 TO Q$(Z1)
    0x55b8aae2dc60 ---------F   10750 GOTO 10800
    0x55b8aae2dcf0 ---------F T 10760 PRINT
    0x55b8aae2e100 ---------F   10770 PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    0x55b8aae2e240 ---------F   10780 PRINT "     1 <=  Z1,Z2  <=8    "
    0x55b8aae2e2b0 ---------F   10790 PRINT
    0x55b8aae2e300 ---------F T 10800 RETURN
    0x55b8aae55d30 ---------G G 10810 GOTO 10860 (Pseudo Goto)
    0x55b8aae2e380 ---------G   10820 REM
    0x55b8aae2e470 ---------G   10830 REM ===============================================================
    0x55b8aae2e4f0 ---------G   10840 REM
    0x55b8aae2e5b0 ---------G   10850 REM *** PRINTS DEVICE NAME FROM ARRAY ***
    0x55b8aae2e710 ---------G T 10860 PRINT D$(R1);
    0x55b8aae2e760 ---------G   10870 RETURN
    0x55b8aae55e10 ---------H G 10880 GOTO 10930 (Pseudo Goto)
    0x55b8aae2e7e0 ---------H   10890 REM
    0x55b8aae2e8d0 ---------H   10900 REM ===============================================================
    0x55b8aae2e950 ---------H   10910 REM
    0x55b8aae2ea10 ---------H   10920 REM *** STRING COMPARISON IN QUADRANT ARRAY ***
    0x55b8aae2ec90 ---------H T 10930 LET Z1=INT(Z1+.5)
    0x55b8aae2ef00 ---------H   10940 LET Z2=INT(Z2+.5)
    0x55b8aae2f090 ---------H   10950 LET Z3=0
    0x55b8aae2f5a0 ---------H   10960 IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10980
    0x55b8aae2f740 ---------H   10970 Z3 = 1
    0x55b8aae2f790 ---------H T 10980 RETURN
    0x55b8aae55ef0 ---------I G 10990 GOTO 11050 (Pseudo Goto)
    0x55b8aae2f810 ---------I   11000 REM
    0x55b8aae2f900 ---------I   11010 REM ===============================================================
    0x55b8aae2f980 ---------I   11020 REM
    0x55b8aae2fa60 ---------I   11030 REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    0x55b8aae2fb20 ---------I   11040 REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)
    0x55b8aae2fd30 ---------I T 11050 LET L2=2
    0x55b8aae2fec0 ---------I   11060 IF Z5>=5 GOTO 11080
    0x55b8aae30070 ---------I   11070 LET L2=1
    0x55b8aae304c0 ---------I T 11080 LET L3=2*(Z4-1)+L2
    0x55b8aae30660 ---------I   11090 LET G2$=G1$(L3)
    0x55b8aae307f0 ---------I   11100 IF G5=1 GOTO 11180
    0x55b8aae30960 ---------I   11110 LET L3=Z5
    0x55b8aae30af0 ---------I   11120 IF Z5<=4 GOTO 11140
    0x55b8aae30d30 ---------I   11130 LET L3=Z5-4
    0x55b8aae30f50 ---------I T 11140 LET G3$="IV"
    0x55b8aae310e0 ---------I   11150 IF L3=4 GOTO 11170
    0x55b8aae313b0 ---------I   11160 LET G3$=MID$(G4$,1,L3)
    0x55b8aae31680 ---------I T 11170 G2$=G2$+" "+G3$
    0x55b8aae316d0 ---------I T 11180 RETURN 
    0x55b8aae55fd0 ---------J G 11190 GOTO 11230 (Pseudo Goto)
    0x55b8aae317b0 ---------J   11200 REM Gosub target.
    0x55b8aae318b0 ---------J   11210 REM This segment was originally from file STINST.BAS and was included with 
    0x55b8aae31960 ---------J   11220 REM a CHAIN command./ASA Jul 27,2009
    0x55b8aae319f0 ---------J T 11230 PRINT
    0x55b8aae31a70 ---------J   11240 REM INSTRUCTIONS FOR "STREK" GAME
    0x55b8aae31b10 ---------J   11250 REM VERSION "STINST2" 12/8/74
    0x55b8aae31d70 ---------J   11260 FOR I=1 TO 9
    0x55b8aae323f0 ---------J   11270     ON I GOTO 11460, 11580, 11760, 11860, 11940, 12000, 12080, 12130, 12180
    0x55b8aae32480 ---------J T 11280     PRINT
    0x55b8aae325e0 ---------J   11290     PRINT "<TO CONTINUE, HIT 'RETURN'>";
    0x55b8aae326b0 ---------J   11300     INPUT A$
    0x55b8aae32730 ---------J   11310     PRINT
    0x55b8aae327e0 ---------J   11320 NEXT I
    0x55b8aae329c0 ---------J   11330 PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x55b8aae32b60 ---------J   11340 PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    0x55b8aadfe380 ---------J   11350 PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x55b8aadfe510 ---------J   11360 PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x55b8aadfe6b0 ---------J   11370 PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    0x55b8aadfe850 ---------J   11380 PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    0x55b8aadfe9c0 ---------J   11390 PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x55b8aadfeb00 ---------J   11400 PRINT "      WILL BE ABORTED."
    0x55b8aadfeb90 ---------J   11410 PRINT
    0x55b8aadfecf0 ---------J   11420 PRINT "HIT <CAR RET> TO CONTINUE ";
    0x55b8aadfedc0 ---------J   11430 INPUT A$
    0x55b8aae560f0 ---------J   11440 GOTO 12390 (Pseudo Goto)
    0x55b8aadfeeb0 ---------J   11450 REM *** EXIT HERE ***
    0x55b8aadfef50 ---------J T 11460 PRINT
    0x55b8aadff090 ---------J   11470 PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    0x55b8aadff130 ---------J   11480 PRINT 
    0x55b8aadff2c0 ---------J   11490 PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    0x55b8aadff420 ---------J   11500 PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    0x55b8aadff4d0 ---------J   11510 PRINT
    0x55b8aadff670 ---------J   11520 PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    0x55b8aadff810 ---------J   11530 PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    0x55b8aadff9a0 ---------J   11540 PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    0x55b8aadffaf0 ---------J   11550 PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    0x55b8aadffb60 ---------J   11560 PRINT
    0x55b8aadffbd0 ---------J   11570 GOTO 11280
    0x55b8aadffc60 ---------J T 11580 PRINT
    0x55b8aadffdc0 ---------J   11590 PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x55b8aadfff20 ---------J   11600 PRINT "CAPTAIN OF THE STARSHIP:"
    0x55b8aae000a0 ---------J   11610 PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    0x55b8aae36bc0 ---------J   11620 PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    0x55b8aae36d40 ---------J   11630 PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    0x55b8aae36ec0 ---------J   11640 PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    0x55b8aae37040 ---------J   11650 PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    0x55b8aae371c0 ---------J   11660 PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    0x55b8aae37340 ---------J   11670 PRINT "                                             . . ."
    0x55b8aae374b0 ---------J   11680 PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    0x55b8aae375f0 ---------J   11690 PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    0x55b8aae37760 ---------J   11700 PRINT "                                            COURSE  "
    0x55b8aae378c0 ---------J   11710 PRINT " ONE WARP FACTOR IS THE SIZE OF "
    0x55b8aae37a20 ---------J   11720 PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    0x55b8aae37b80 ---------J   11730 PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    0x55b8aae37cc0 ---------J   11740 PRINT " USE COURSE 3, WARP FACTOR 1."
    0x55b8aae37d50 ---------J   11750 GOTO 11280
    0x55b8aae37ec0 ---------J T 11760 PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    0x55b8aae38040 ---------J   11770 PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    0x55b8aae381b0 ---------J   11780 PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x55b8aae38310 ---------J   11790 PRINT "		<*> = YOUR STARSHIP'S POSITION"
    0x55b8aae38480 ---------J   11800 PRINT "		+++ = KLINGON BATTLE CRUISER"
    0x55b8aae385f0 ---------J   11810 PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    0x55b8aae38750 ---------J   11820 PRINT "		 *  = STAR"
    0x55b8aae388a0 ---------J   11830 PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x55b8aae38910 ---------J   11840 PRINT
    0x55b8aae389a0 ---------J   11850 GOTO 11280
    0x55b8aae38b10 ---------J T 11860 PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    0x55b8aae38ca0 ---------J   11870 PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x55b8aae38e40 ---------J   11880 PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    0x55b8aae38fe0 ---------J   11890 PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    0x55b8aae39170 ---------J   11900 PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    0x55b8aae392f0 ---------J   11910 PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    0x55b8aae39450 ---------J   11920 PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    0x55b8aae394e0 ---------J   11930 GOTO 11280
    0x55b8aae39640 ---------J T 11940 PRINT "'PHA' COMMAND = PHASER CONTROL"
    0x55b8aae397d0 ---------J   11950 PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    0x55b8aae39950 ---------J   11960 PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    0x55b8aae39ac0 ---------J   11970 PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    0x55b8aae39bf0 ---------J   11980 PRINT "  PHASERS, TOO!)"
    0x55b8aae39c80 ---------J   11990 GOTO 11280
    0x55b8aae39e00 ---------J T 12000 PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    0x55b8aae39f90 ---------J   12010 PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    0x55b8aae3a120 ---------J   12020 PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    0x55b8aae3a290 ---------J   12030 PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    0x55b8aae3a3f0 ---------J   12040 PRINT "  HIS PHASER FIRE."
    0x55b8aae3a590 ---------J   12050 PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    0x55b8aae3a6f0 ---------J   12060 PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    0x55b8aae3a780 ---------J   12070 GOTO 11280
    0x55b8aae3a8f0 ---------J T 12080 PRINT "'SHE' COMMAND = SHIELD CONTROL"
    0x55b8aae3aa90 ---------J   12090 PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    0x55b8aae3ac10 ---------J   12100 PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    0x55b8aae3ad60 ---------J   12110 PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    0x55b8aae3adf0 ---------J   12120 GOTO 11280
    0x55b8aae3af50 ---------J T 12130 PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    0x55b8aae3b0e0 ---------J   12140 PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    0x55b8aae3b250 ---------J   12150 PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    0x55b8aae3b380 ---------J   12160 PRINT "  DAMAGED."
    0x55b8aae3b410 ---------J   12170 GOTO 11280
    0x55b8aae3b570 ---------J T 12180 PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    0x55b8aae3b6e0 ---------J   12190 PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    0x55b8aae3b870 ---------J   12200 PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    0x55b8aae3b9f0 ---------J   12210 PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    0x55b8aae3bb50 ---------J   12220 PRINT "     LONG RANGE SENSOR SCANS."
    0x55b8aae3bcd0 ---------J   12230 PRINT "  OPTION 1 = STATUS REPORT"
    0x55b8aae3be50 ---------J   12240 PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    0x55b8aae3bfb0 ---------J   12250 PRINT "     REMAINING IN THE GAME."
    0x55b8aae3c130 ---------J   12260 PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    0x55b8aae3c2b0 ---------J   12270 PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    0x55b8aae3c410 ---------J   12280 PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    0x55b8aae3c580 ---------J   12290 PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    0x55b8aae3c6f0 ---------J   12300 PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    0x55b8aae3c860 ---------J   12310 PRINT "     WITHIN YOUR QUADRANT"
    0x55b8aae3c9e0 ---------J   12320 PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    0x55b8aae3cb50 ---------J   12330 PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    0x55b8aae3ccb0 ---------J   12340 PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    0x55b8aae3ce30 ---------J   12350 PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    0x55b8aae3cfb0 ---------J   12360 PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    0x55b8aae3d0f0 ---------J   12370 PRINT "     REGIONS REFERRED TO IN THE GAME."
    0x55b8aae3d160 ---------J   12380 GOTO 11280
    0x55b8aae560b0 ---------J T 12390 RETURN (Pseudo)
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_01730s[]={"WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"};
char* data_01740s[]={"PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "};
char* data_01800s[]={"ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"};
char* data_01810s[]={"BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"};
char* data_01820s[]={"SAGITTARIUS","ARCTURUS","POLLUX","SPICA"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1730,  4,data_01730s},
    { 1740,  4,data_01740s},
    { 1800,  7,data_01800s},
    { 1810,  5,data_01810s},
    { 1820,  4,data_01820s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int;        // Comments?
char* tmpstr;       // Comments?
char* CommandInitials;  // Comments?
int   ShipStrUnpacked[4];   // Comments?
int   A9_int;       // Comments?
int   StarbaseSector;   // Comments?
int   B4_int;       // Comments?
int   B5_int;       // Comments?
int   StarbaseTotal;// Comments?
int   C_int_arr[10][3]; // Comments?
int   C_int;        // Comments?
char* Condition;    // Comments?
int   C1_int;       // Comments?
int   D_int;        // Comments?
float DamageControl[9]; // Comments?
char* CommandNames[9];  // Comments?
int   flgProtectedByStarbase;   // Comments?
int   D1_int;       // Comments?
float SystemDamage; // Comments?
float D3_flt;       // Comments?
float D4_flt;       // Comments?
int   D6_int;       // Comments?
int   CurrentEnergy;// Comments?
int   InitialEnergy;// Comments?
int   SectorPopulation[9][9];   // Comments?
char* QuadrantName[17]; // Comments?
char* QuadName;     // Comments?
char* G3_str;       // Comments?
char* QuadrantNameSuffix;   // Comments?
int   G5_int;       // Comments?
int   KlingonHitDamage; // Comments?
int   H1_int;       // Comments?
int   H8_int;       // Comments?
int   idx_i;        // Comments?
int   I1_int;       // Comments?
int   QuadIdx;      // Comments?
int   idx;          // Comments?
int   idx_j;        // Comments?
int   J0_int;       // Comments?
int   KlingonInfoLocAndDamage[4][4];// Comments?
int   K_int;        // Comments?
int   KlingonsSector;   // Comments?
int   K7_int;       // Comments?
int   KlingonsTotal;// Comments?
int   L2_int;       // Comments?
int   L3_int;       // Comments?
int   M9_int;       // Comments?
int   N_int_arr[4]; // Comments?
int   WarpEnergy;   // Comments?
char* N_str;        // Comments?
char* N1_str;       // Comments?
char* N2_str;       // Comments?
char* N5_str;       // Comments?
char* O1_str;       // Comments?
char* O3_str;       // Comments?
int   PhotonTorpedoes;  // Comments?
int   P0_int;       // Comments?
float QuarterPi;    // Comments?
char* P1_str;       // Comments?
char* QuadrantInfo[9];  // Comments?
int   EnterpriseQuadrantX;  // Comments?
int   EnterpriseQuadrantY;  // Comments?
int   Q4_int;       // Comments?
int   Q5_int;       // Comments?
int   QuadrantUnpacked[25]; // Comments?
int   Q9_int;       // Comments?
int   RandomNbr1;   // Comments?
int   RandomNbr2;   // Comments?
int   EnterpriseSheilds;// Comments?
int   EnterpriseSectorX;// Comments?
int   EnterpriseSectorY;// Comments?
int   SectorStars;  // Comments?
int   S9_int;       // Comments?
float StarDate;     // Comments?
int   StartStarDate;// Comments?
float T8_flt;       // Comments?
int   CampaignLength;   // Comments?
int   V5_int;       // Comments?
int   WarpFactor;   // Comments?
int   X_int;        // Comments?
char* X_str;        // Comments?
char* X0_str;       // Comments?
int   X1_int;       // Comments?
int   X2_int;       // Comments?
int   X5_int;       // Comments?
int   X9_int;       // Comments?
int   Y_int;        // Comments?
int   Y9_int;       // Comments?
int   Z_int_arr[9][9];  // Comments?
int   QuadY;        // Comments?
int   QuadX;        // Comments?
int   rtn;          // Comments?
int   Z4_int;       // Comments?
int   Z5_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void EmergencyShieldPower();
void KlingonAttack();
void DspSRSAndStatus();
void Routine_10430();
void InsertInQuadrant();
void DspDeviceName();
void CheckQuadrantFor();
void GetQuadrantName();
void DisplayHelp();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused D
int FND(int D){
    int rtn=SQR(IPower((KlingonInfoLocAndDamage[(int)idx_i][(int)1]-EnterpriseSectorX),2)+IPower((KlingonInfoLocAndDamage[(int)idx_i][(int)2]-EnterpriseSectorY),2));
    return(rtn);
}

//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void EmergencyShieldPower(){
    // 09140 GOTO 9190 (Pseudo Goto)
    goto Start;
    // 09150 REM
    // 09160 REM ===============================================================
    // 09170 REM
    // 09180 REM MANEUVER ENERGY S/R ***

  Start:
    // 09190 LET E=E-N-10
    CurrentEnergy = CurrentEnergy-WarpEnergy-10;
    // 09200 IF E>=0 GOTO 9260
    if(CurrentEnergy>=0)goto ShieldsEnergized;
    // 09210 PRINT "SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."
    b2c_fprintf(stdout,"SHIELD CONTROL SUPPLIED ENERGY TO COMPLETE THE MANEUVER."); b2c_fprintf(stdout,"\n");
    // 09220 LET S=S+E
    EnterpriseSheilds = EnterpriseSheilds+CurrentEnergy;
    // 09230 LET E=0
    CurrentEnergy = 0;
    // 09240 IF S>0 GOTO 9260
    if(EnterpriseSheilds>0)goto ShieldsEnergized;
    // 09250 LET S=0
    EnterpriseSheilds = 0;

  ShieldsEnergized:
    // 09260 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void KlingonAttack(){
    // 09270 GOTO 9320 (Pseudo Goto)
    goto KlingonAttack;
    // 09280 REM
    // 09290 REM ===============================================================
    // 09300 REM
    // 09310 REM "KLINGONS SHOOTING" CODE BEGINS ***

  KlingonAttack:
    // 09320 IF K3<=0 GOTO 9530
    if(KlingonsSector<=0)goto NoKlingonAttack;
    // 09330 IF D0=0 GOTO 9360
    if(flgProtectedByStarbase==0)goto EachKlingonAttack;
    // 09340 PRINT "STAR BASE SHIELDS PROTECT THE ENTERPRISE"
    b2c_fprintf(stdout,"STAR BASE SHIELDS PROTECT THE ENTERPRISE"); b2c_fprintf(stdout,"\n");
    // 09350 GOTO 9530
    goto NoKlingonAttack;

  EachKlingonAttack:
    // 09360 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 09370     IF K(I,3)<=0 GOTO 9520
        if(KlingonInfoLocAndDamage[(int)idx_i][(int)3]<=0)goto NextKlingon;
        // 09380     LET H=INT((K(I,3)/FND(0))*(2+RND(1)))
        KlingonHitDamage = INT((KlingonInfoLocAndDamage[(int)idx_i][(int)3]/FND(0))*(2+RND(1)));
        // 09390     LET S=S-H
        EnterpriseSheilds = EnterpriseSheilds-KlingonHitDamage;
        // 09400     PRINT H" UNIT HIT ON ENTERPRISE FROM SECTOR"K(I,1)","K(I,2)
        b2c_fprintf(stdout," %d  UNIT HIT ON ENTERPRISE FROM SECTOR %d , %d ",KlingonHitDamage,KlingonInfoLocAndDamage[(int)idx_i][(int)1],KlingonInfoLocAndDamage[(int)idx_i][(int)2]); b2c_fprintf(stdout,"\n");
        // 09410     IF S<0 GOTO 9530
        if(EnterpriseSheilds<0)goto NoKlingonAttack;
        // 09420     PRINT "      (SHIELDS DOWN TO"S" UNITS.)"
        b2c_fprintf(stdout,"      (SHIELDS DOWN TO %d  UNITS.)",EnterpriseSheilds); b2c_fprintf(stdout,"\n");
        // 09430     IF H<20 GOTO 9520
        if(KlingonHitDamage<20)goto NextKlingon;
        // 09440     IF RND(1)>.6 GOTO 9520
        if(RND(1)>0.6)goto NextKlingon;
        // 09450     IF H/S<=.02 GOTO 9520
        if(KlingonHitDamage/EnterpriseSheilds<=0.02)goto NextKlingon;
        // 09460     LET D2=H/S+.5*RND(1)
        SystemDamage = KlingonHitDamage/EnterpriseSheilds+0.5*RND(1);
        // 09470     LET R1=INT(RND(1)*8+1)
        RandomNbr1 = INT(RND(1)*8+1);
        // 09480     LET D(R1)=D(R1)-D2
        DamageControl[(int)RandomNbr1] = DamageControl[(int)RandomNbr1]-SystemDamage;
        // 09490     PRINT "DAMAGE CONTROL REPORTS '";
        b2c_fprintf(stdout,"DAMAGE CONTROL REPORTS '"); 
        // 09500     GOSUB 10810
        DspDeviceName();
        // 09510     PRINT " DAMAGED BY THE HIT!'"
        b2c_fprintf(stdout," DAMAGED BY THE HIT!'"); b2c_fprintf(stdout,"\n");

  NextKlingon:
        // 09520 NEXT I
        int dummy_9520=0; // Ignore this line.
    }; // End-For(idx_i)

  NoKlingonAttack:
    // 09530 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void DspSRSAndStatus(){
    // 09540 GOTO 9590 (Pseudo Goto)
    goto SRSAndStatus;
    // 09550 REM
    // 09560 REM ===============================================================
    // 09570 REM
    // 09580 REM S.R. SENSOR SCAN & STARTUP SUBR. ***

  SRSAndStatus:
    // 09590 FOR I=S1-1 TO S1+1
    for(idx_i=EnterpriseSectorX-1;idx_i<=EnterpriseSectorX+1;idx_i++){
        // 09600     FOR J=S2-1 TO S2+1
        for(idx_j=EnterpriseSectorY-1;idx_j<=EnterpriseSectorY+1;idx_j++){
            // 09610 	IF INT(I+.5)<1 GOTO 9700
            if(INT(idx_i+0.5)<1)goto NextSectorSpot;
            // 09620 	IF INT(I+.5)>8 GOTO 9700
            if(INT(idx_i+0.5)>8)goto NextSectorSpot;
            // 09630 	IF INT(J+.5)<1 GOTO 9700
            if(INT(idx_j+0.5)<1)goto NextSectorSpot;
            // 09640 	IF INT(J+.5)>8 GOTO 9700
            if(INT(idx_j+0.5)>8)goto NextSectorSpot;
            // 09650 	LET A$=">!<"
            GLBpStr=">!<";
            tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 09660 	LET Z1=I
            QuadY = idx_i;
            // 09670 	LET Z2=J
            QuadX = idx_j;
            // 09680 	GOSUB 10880
            CheckQuadrantFor();
            // 09690 	IF Z3=1 GOTO 9740
            if(rtn==1)goto Docked;

  NextSectorSpot:
            // 09700     NEXT J
            int dummy_9700=0; // Ignore this line.
        }; // End-For(idx_j)
        // 09710 NEXT I
        int dummy_9710=0; // Ignore this line.
    }; // End-For(idx_i)
    // 09720 LET D0=0
    flgProtectedByStarbase = 0;
    // 09730 GOTO 9810
    goto ChkCondCode;

  Docked:
    // 09740 LET D0=1
    flgProtectedByStarbase = 1;
    // 09750 LET C$="DOCKED"
    GLBpStr="DOCKED";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09760 LET E=3000
    CurrentEnergy = 3000;
    // 09770 LET P=10
    PhotonTorpedoes = 10;
    // 09780 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES"
    b2c_fprintf(stdout,"SHIELDS DROPPED FOR DOCKING PURPOSES"); b2c_fprintf(stdout,"\n");
    // 09790 LET S=0
    EnterpriseSheilds = 0;
    // 09800 GOTO 9880
    goto CheckSRSstatus;

  ChkCondCode:
    // 09810 IF K3>0 GOTO 9850
    if(KlingonsSector>0)goto RedAlert;
    // 09820 IF E<E0*.1 GOTO 9870
    if(CurrentEnergy<InitialEnergy*0.1)goto YellowAlert;
    // 09830 LET C$=" GREEN"
    GLBpStr=" GREEN";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09840 GOTO 9880
    goto CheckSRSstatus;

  RedAlert:
    // 09850 C$=" "+CHR$(7)+"*RED*"+CHR$(7)
    GLBpStr=StringCat(StringCat(StringCat(" ",CHR(7)),"*RED*"),CHR(7));
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09860 GOTO 9880
    goto CheckSRSstatus;

  YellowAlert:
    // 09870 LET C$="YELLOW"
    GLBpStr="YELLOW";
    Condition = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  CheckSRSstatus:
    // 09880 IF D(2)>=0 GOTO 9930
    if(DamageControl[(int)2]>=0)goto SRSWorking;
    // 09890 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 09900 PRINT "*** SHORT RANGE SENSORS ARE OUT ***"
    b2c_fprintf(stdout,"*** SHORT RANGE SENSORS ARE OUT ***"); b2c_fprintf(stdout,"\n");
    // 09910 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 09920 GOTO 10420
    goto Lbl_10420;

  SRSWorking:
    // 09930 LET O1$="--------------------------------"
    GLBpStr="--------------------------------";
    O1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09940 PRINT O1$
    b2c_fprintf(stdout,"%s",O1_str); b2c_fprintf(stdout,"\n");
    // 09950 LET N5$="####"
    GLBpStr="####";
    N5_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 09960 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 09970 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 09980     PRINT MID$(Q$(1),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)1],idx_i,3)); 
        // 09990 NEXT I
        int dummy_9990=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10000 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 10010 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10020 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10030     PRINT MID$(Q$(2),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)2],idx_i,3)); 
        // 10040 NEXT I
        int dummy_10040=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10050 PRINT "        STARDATE         ";
    b2c_fprintf(stdout,"        STARDATE         "); 
    // 10060 PRINT USING "####.#",T
    b2c_fprintf(stdout,"%6.1f ",FT(StarDate)); b2c_fprintf(stdout,"\n");
    // 10070 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10080 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10090     PRINT MID$(Q$(3),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)3],idx_i,3)); 
        // 10100 NEXT I
        int dummy_10100=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10110 PRINT "        CONDITION        ";
    b2c_fprintf(stdout,"        CONDITION        "); 
    // 10120 PRINT C$
    b2c_fprintf(stdout,"%s",Condition); b2c_fprintf(stdout,"\n");
    // 10130 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10140 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10150     PRINT MID$(Q$(4),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)4],idx_i,3)); 
        // 10160 NEXT I
        int dummy_10160=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10170 PRINT "        QUADRANT         "Q1","Q2
    b2c_fprintf(stdout,"        QUADRANT          %d , %d ",EnterpriseQuadrantX,EnterpriseQuadrantY); b2c_fprintf(stdout,"\n");
    // 10180 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10190 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10200     PRINT MID$(Q$(5),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)5],idx_i,3)); 
        // 10210 NEXT I
        int dummy_10210=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10220 PRINT "        SECTOR           "S1","S2
    b2c_fprintf(stdout,"        SECTOR            %d , %d ",EnterpriseSectorX,EnterpriseSectorY); b2c_fprintf(stdout,"\n");
    // 10230 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10240 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10250     PRINT MID$(Q$(6),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)6],idx_i,3)); 
        // 10260 NEXT I
        int dummy_10260=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10270 PRINT "        TOTAL ENERGY     ";
    b2c_fprintf(stdout,"        TOTAL ENERGY     "); 
    // 10280 PRINT USING N5$,E+S
    b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(N5_str),CurrentEnergy+EnterpriseSheilds); b2c_fprintf(stdout,"\n");
    // 10290 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10300 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10310     PRINT MID$(Q$(7),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)7],idx_i,3)); 
        // 10320 NEXT I
        int dummy_10320=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10330 PRINT "        PHOTON TORPEDOES ";
    b2c_fprintf(stdout,"        PHOTON TORPEDOES "); 
    // 10340 PRINT USING N5$,P
    b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(N5_str),PhotonTorpedoes); b2c_fprintf(stdout,"\n");
    // 10350 PRINT " ";
    b2c_fprintf(stdout," "); 
    // 10360 FOR I=1 TO 22 STEP 3
    for(idx_i=1;idx_i<=22;idx_i+=3){
        // 10370     PRINT MID$(Q$(8),I,3)" ";
        b2c_fprintf(stdout,"%s ",MID(QuadrantInfo[(int)8],idx_i,3)); 
        // 10380 NEXT I
        int dummy_10380=0; // Ignore this line.
    }; // End-For(idx_i)
    // 10390 PRINT "        SHIELDS          ";
    b2c_fprintf(stdout,"        SHIELDS          "); 
    // 10400 PRINT USING N5$,S
    b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(N5_str),EnterpriseSheilds); b2c_fprintf(stdout,"\n");
    // 10410 PRINT O1$
    b2c_fprintf(stdout,"%s",O1_str); b2c_fprintf(stdout,"\n");

  Lbl_10420:
    // 10420 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_10430(){
    // 10430 GOTO 10490 (Pseudo Goto)
    goto FindQuadHole;
    // 10440 REM *** END OF LIBRARY-COMPUTER CODE
    // 10450 REM
    // 10460 REM ===============================================================
    // 10470 REM
    // 10480 REM S/R FINDS RANDOM HOLE IN QUADRANT

  FindQuadHole:
    // 10490 LET R1=INT(RND(1)*8+1)
    RandomNbr1 = INT(RND(1)*8+1);
    // 10500 LET R2=INT(RND(1)*8+1)
    RandomNbr2 = INT(RND(1)*8+1);
    // 10510 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 10520 LET Z1=R1
    QuadY = RandomNbr1;
    // 10530 LET Z2=R2
    QuadX = RandomNbr2;
    // 10540 GOSUB 10880
    CheckQuadrantFor();
    // 10550 IF Z3=0 GOTO 10490
    if(rtn==0)goto FindQuadHole;
    // 10560 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void InsertInQuadrant(){
    // 10570 GOTO 10620 (Pseudo Goto)
    goto Lbl_10620;
    // 10580 REM
    // 10590 REM ===============================================================
    // 10600 REM
    // 10610 REM *** INSERTION IN STRING ARRAY FOR QUADRANT ***

  Lbl_10620:
    // 10620 Z1 = INT(Z1+.5)
    QuadY = INT(QuadY+0.5);
    // 10630 Z2 = INT(Z2+.5)
    QuadX = INT(QuadX+0.5);
    // 10640 IF Z1<1 GOTO 10760
    if(QuadY<1)goto BadQuadCoords;
    // 10650 IF Z1>8 GOTO 10760
    if(QuadY>8)goto BadQuadCoords;
    // 10660 IF Z2<1 GOTO 10760
    if(QuadX<1)goto BadQuadCoords;
    // 10670 IF Z2>8 GOTO 10760
    if(QuadX>8)goto BadQuadCoords;
    // 10680 DIM Q9(24), A9(3)
    // 10690 CHANGE Q$(Z1) TO Q9
    if(QuadrantInfo[(int)QuadY]!=nullptr){
        for(int i=1;(i<=(int)strlen(QuadrantInfo[(int)QuadY]))&&(i<=25);i++){
            QuadrantUnpacked[i]=(int)QuadrantInfo[(int)QuadY][i-1];
        }
    }
    // 10700 CHANGE A$ TO A9
    if(tmpstr!=nullptr){
        for(int i=1;(i<=(int)strlen(tmpstr))&&(i<=4);i++){
            ShipStrUnpacked[i]=(int)tmpstr[i-1];
        }
    }
    // 10710 FOR I8 = 1 TO 3
    for(idx=1;idx<=3;idx++){
        // 10720     Q9(3*(Z2-1) + I8) = A9(I8)
        QuadrantUnpacked[(int)3*(QuadX-1)+idx] = ShipStrUnpacked[(int)idx];
        // 10730 NEXT I8
        int dummy_10730=0; // Ignore this line.
    }; // End-For(idx)
    // 10740 CHANGE Q9 TO Q$(Z1)
    if(QuadrantInfo[(int)QuadY]!=nullptr){
        for(int i=1;(i<=(int)strlen(QuadrantInfo[(int)QuadY]))&&(i<=25);i++){
            QuadrantInfo[(int)QuadY][i-1]=(int)QuadrantUnpacked[i];
        }
    }
    // 10750 GOTO 10800
    goto Finished;

  BadQuadCoords:
    // 10760 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 10770 PRINT "ERROR IN COORDINATES (Z1,Z2): (";Z1;",";Z2;")"
    b2c_fprintf(stdout,"ERROR IN COORDINATES (Z1,Z2): ( %d , %d )",QuadY,QuadX); b2c_fprintf(stdout,"\n");
    // 10780 PRINT "     1 <=  Z1,Z2  <=8    "
    b2c_fprintf(stdout,"     1 <=  Z1,Z2  <=8    "); b2c_fprintf(stdout,"\n");
    // 10790 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Finished:
    // 10800 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------

void DspDeviceName(){
    // 10810 GOTO 10860 (Pseudo Goto)
    goto DisplayDevice;
    // 10820 REM
    // 10830 REM ===============================================================
    // 10840 REM
    // 10850 REM *** PRINTS DEVICE NAME FROM ARRAY ***

  DisplayDevice:
    // 10860 PRINT D$(R1);
    b2c_fprintf(stdout,"%s",CommandNames[(int)RandomNbr1]); 
    // 10870 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine H
//---------------------------------------------------------------------------

void CheckQuadrantFor(){
    // 10880 GOTO 10930 (Pseudo Goto)
    goto CheckQuadArray;
    // 10890 REM
    // 10900 REM ===============================================================
    // 10910 REM
    // 10920 REM *** STRING COMPARISON IN QUADRANT ARRAY ***

  CheckQuadArray:
    // 10930 LET Z1=INT(Z1+.5)
    QuadY = INT(QuadY+0.5);
    // 10940 LET Z2=INT(Z2+.5)
    QuadX = INT(QuadX+0.5);
    // 10950 LET Z3=0
    rtn = 0;
    // 10960 IF MID$(Q$(Z1),(3*Z2-2),3) <> A$ GOTO 10980
    if(strcmp(MID(QuadrantInfo[(int)QuadY],(3*QuadX-2),3),tmpstr)!=0)goto NotFound;
    // 10970 Z3 = 1
    rtn = 1;

  NotFound:
    // 10980 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine I
//---------------------------------------------------------------------------

void GetQuadrantName(){
    // 10990 GOTO 11050 (Pseudo Goto)
    goto QuadrantName;
    // 11000 REM
    // 11010 REM ===============================================================
    // 11020 REM
    // 11030 REM ** S/R PRODUCES QUADRANT NAME IN G2$ FROM Z4,Z5(=Q1,Q2)
    // 11040 REM ** (CALL WITH G5=1 TO GET REGION NAME ONLY)

  QuadrantName:
    // 11050 LET L2=2
    L2_int = 2;
    // 11060 IF Z5>=5 GOTO 11080
    if(Z5_int>=5)goto RightQuadColumn;
    // 11070 LET L2=1
    L2_int = 1;

  RightQuadColumn:
    // 11080 LET L3=2*(Z4-1)+L2
    L3_int = 2*(Z4_int-1)+L2_int;
    // 11090 LET G2$=G1$(L3)
    GLBpStr=QuadrantName[(int)L3_int];
    QuadName = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 11100 IF G5=1 GOTO 11180
    if(G5_int==1)goto Lbl_11180;
    // 11110 LET L3=Z5
    L3_int = Z5_int;
    // 11120 IF Z5<=4 GOTO 11140
    if(Z5_int<=4)goto Lbl_11140;
    // 11130 LET L3=Z5-4
    L3_int = Z5_int-4;

  Lbl_11140:
    // 11140 LET G3$="IV"
    GLBpStr="IV";
    G3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 11150 IF L3=4 GOTO 11170
    if(L3_int==4)goto AppQuadNameVers;
    // 11160 LET G3$=MID$(G4$,1,L3)
    GLBpStr=MID(QuadrantNameSuffix,1,L3_int);
    G3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  AppQuadNameVers:
    // 11170 G2$=G2$+" "+G3$
    GLBpStr=StringCat(StringCat(QuadName," "),G3_str);
    QuadName = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_11180:
    // 11180 RETURN 
    return;
};


//---------------------------------------------------------------------------
// Routine J
//---------------------------------------------------------------------------

void DisplayHelp(){
    // 11190 GOTO 11230 (Pseudo Goto)
    goto StartHelp;
    // 11200 REM Gosub target.
    // 11210 REM This segment was originally from file STINST.BAS and was included with 
    // 11220 REM a CHAIN command./ASA Jul 27,2009

  StartHelp:
    // 11230 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11240 REM INSTRUCTIONS FOR "STREK" GAME
    // 11250 REM VERSION "STINST2" 12/8/74
    // 11260 FOR I=1 TO 9
    for(idx_i=1;idx_i<=9;idx_i++){
        // 11270     ON I GOTO 11460, 11580, 11760, 11860, 11940, 12000, 12080, 12130, 12180
        switch((int)(idx_i)){
            case 1: goto DspHelpPage02;
            case 2: goto DspHelpPage03;
            case 3: goto DspHelpPage04;
            case 4: goto DspHelpPage05;
            case 5: goto DspHelpPage06;
            case 6: goto DspHelpPage07;
            case 7: goto DspHelpPage08;
            case 8: goto DspHelpPage09;
            case 9: goto DspHelpPage10;
            default: break; 
        };

  DspHelpPage01:
        // 11280     PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 11290     PRINT "<TO CONTINUE, HIT 'RETURN'>";
        b2c_fprintf(stdout,"<TO CONTINUE, HIT 'RETURN'>"); 
        // 11300     INPUT A$
        // Start of Basic INPUT statement 11300
        printf(" ? ");
        char inpbuf_11300[100];
        if(fgets(inpbuf_11300,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_11300=strtok(inpbuf_11300," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_11300==nullptr){
                tmpstr = "";
            }else{
                tmpstr = ps_11300;
            };
        }; // End of Basic INPUT statement 11300
        // 11310     PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 11320 NEXT I
        int dummy_11320=0; // Ignore this line.
    }; // End-For(idx_i)
    // 11330 PRINT "1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    b2c_fprintf(stdout,"1.  WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"); b2c_fprintf(stdout,"\n");
    // 11340 PRINT "      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."
    b2c_fprintf(stdout,"      COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM, OR XXX)."); b2c_fprintf(stdout,"\n");
    // 11350 PRINT "2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    b2c_fprintf(stdout,"2.  IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"); b2c_fprintf(stdout,"\n");
    // 11360 PRINT "      LIST OF THE LEGAL COMMANDS PRINTED OUT."
    b2c_fprintf(stdout,"      LIST OF THE LEGAL COMMANDS PRINTED OUT."); b2c_fprintf(stdout,"\n");
    // 11370 PRINT "3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"
    b2c_fprintf(stdout,"3.  SOME COMMANDS REQUIRE YOU TO ENTER DATA.  (FOR EXAMPLE, THE"); b2c_fprintf(stdout,"\n");
    // 11380 PRINT "      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"
    b2c_fprintf(stdout,"      'NAV' COMMAND COMES BACK WITH 'COURSE (1-9) ?'.)  IF YOU"); b2c_fprintf(stdout,"\n");
    // 11390 PRINT "      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    b2c_fprintf(stdout,"      TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"); b2c_fprintf(stdout,"\n");
    // 11400 PRINT "      WILL BE ABORTED."
    b2c_fprintf(stdout,"      WILL BE ABORTED."); b2c_fprintf(stdout,"\n");
    // 11410 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11420 PRINT "HIT <CAR RET> TO CONTINUE ";
    b2c_fprintf(stdout,"HIT <CAR RET> TO CONTINUE "); 
    // 11430 INPUT A$
    // Start of Basic INPUT statement 11430
    printf(" ? ");
    char inpbuf_11430[100];
    if(fgets(inpbuf_11430,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_11430=strtok(inpbuf_11430," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_11430==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_11430;
        };
    }; // End of Basic INPUT statement 11430
    // 11440 GOTO 12390 (Pseudo Goto)
    goto ExitHelp;
    // 11450 REM *** EXIT HERE ***

  DspHelpPage02:
    // 11460 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11470 PRINT "    INSTRUCTIONS FOR  ** STAR TREK **"
    b2c_fprintf(stdout,"    INSTRUCTIONS FOR  ** STAR TREK **"); b2c_fprintf(stdout,"\n");
    // 11480 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11490 PRINT "THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"
    b2c_fprintf(stdout,"THE GALAXY IS DIVIDED INTO AN 8 x 8 QUADRANT GRID,"); b2c_fprintf(stdout,"\n");
    // 11500 PRINT "AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID." 
    b2c_fprintf(stdout,"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID."); b2c_fprintf(stdout,"\n");
    // 11510 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11520 PRINT "   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"
    b2c_fprintf(stdout,"   YOU WILL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE GALAXY"); b2c_fprintf(stdout,"\n");
    // 11530 PRINT "TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"
    b2c_fprintf(stdout,"TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP 'ENTERPRISE'"); b2c_fprintf(stdout,"\n");
    // 11540 PRINT "YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"
    b2c_fprintf(stdout,"YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF KLINGON WARSHIPS"); b2c_fprintf(stdout,"\n");
    // 11550 PRINT "WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."
    b2c_fprintf(stdout,"WHICH ARE MENACING THE UNITED FEDERATION OF PLANETS."); b2c_fprintf(stdout,"\n");
    // 11560 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11570 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage03:
    // 11580 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11590 PRINT "YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    b2c_fprintf(stdout,"YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"); b2c_fprintf(stdout,"\n");
    // 11600 PRINT "CAPTAIN OF THE STARSHIP:"
    b2c_fprintf(stdout,"CAPTAIN OF THE STARSHIP:"); b2c_fprintf(stdout,"\n");
    // 11610 PRINT "'NAV' COMMAND = WARP ENGINE CONTROL --"
    b2c_fprintf(stdout,"'NAV' COMMAND = WARP ENGINE CONTROL --"); b2c_fprintf(stdout,"\n");
    // 11620 PRINT "  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"
    b2c_fprintf(stdout,"  COURSE IS IN A CIRCULAR NUMERICAL         4  3  2"); b2c_fprintf(stdout,"\n");
    // 11630 PRINT "  VECTOR ARRANGEMENT AS SHOWN.               . . ."
    b2c_fprintf(stdout,"  VECTOR ARRANGEMENT AS SHOWN.               . . ."); b2c_fprintf(stdout,"\n");
    // 11640 PRINT "  INTEGER AND REAL VALUES MAY BE              ..."
    b2c_fprintf(stdout,"  INTEGER AND REAL VALUES MAY BE              ..."); b2c_fprintf(stdout,"\n");
    // 11650 PRINT "  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"
    b2c_fprintf(stdout,"  USED.  (THUS, COURSE 1.5 IS HALF-        5 ----- 1"); b2c_fprintf(stdout,"\n");
    // 11660 PRINT "  WAY BETWEEN 1 AND 2.)                       ..."
    b2c_fprintf(stdout,"  WAY BETWEEN 1 AND 2.)                       ..."); b2c_fprintf(stdout,"\n");
    // 11670 PRINT "                                             . . ."
    b2c_fprintf(stdout,"                                             . . ."); b2c_fprintf(stdout,"\n");
    // 11680 PRINT "  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "
    b2c_fprintf(stdout,"  VALUES MAY APPROACH 9.0, WHICH            6  7  8 "); b2c_fprintf(stdout,"\n");
    // 11690 PRINT "  ITSELF IS EQUIVALENT TO 1.0."
    b2c_fprintf(stdout,"  ITSELF IS EQUIVALENT TO 1.0."); b2c_fprintf(stdout,"\n");
    // 11700 PRINT "                                            COURSE  "
    b2c_fprintf(stdout,"                                            COURSE  "); b2c_fprintf(stdout,"\n");
    // 11710 PRINT " ONE WARP FACTOR IS THE SIZE OF "
    b2c_fprintf(stdout," ONE WARP FACTOR IS THE SIZE OF "); b2c_fprintf(stdout,"\n");
    // 11720 PRINT " ONE QUADRANT.  THEREFORE, TO GET"
    b2c_fprintf(stdout," ONE QUADRANT.  THEREFORE, TO GET"); b2c_fprintf(stdout,"\n");
    // 11730 PRINT " FROM QUADRANT 6,5 TO 5,5, YOU WOULD"
    b2c_fprintf(stdout," FROM QUADRANT 6,5 TO 5,5, YOU WOULD"); b2c_fprintf(stdout,"\n");
    // 11740 PRINT " USE COURSE 3, WARP FACTOR 1."
    b2c_fprintf(stdout," USE COURSE 3, WARP FACTOR 1."); b2c_fprintf(stdout,"\n");
    // 11750 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage04:
    // 11760 PRINT "'SRS' COMMAND = SHORT RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"'SRS' COMMAND = SHORT RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 11770 PRINT "  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."
    b2c_fprintf(stdout,"  SHOWS YOU A SCAN OF YOUR PRESENT QUADRANT."); b2c_fprintf(stdout,"\n");
    // 11780 PRINT "  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    b2c_fprintf(stdout,"  SYMBOLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"); b2c_fprintf(stdout,"\n");
    // 11790 PRINT "		<*> = YOUR STARSHIP'S POSITION"
    b2c_fprintf(stdout,"		<*> = YOUR STARSHIP'S POSITION"); b2c_fprintf(stdout,"\n");
    // 11800 PRINT "		+++ = KLINGON BATTLE CRUISER"
    b2c_fprintf(stdout,"		+++ = KLINGON BATTLE CRUISER"); b2c_fprintf(stdout,"\n");
    // 11810 PRINT "		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"
    b2c_fprintf(stdout,"		>!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE!)"); b2c_fprintf(stdout,"\n");
    // 11820 PRINT "		 *  = STAR"
    b2c_fprintf(stdout,"		 *  = STAR"); b2c_fprintf(stdout,"\n");
    // 11830 PRINT "  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    b2c_fprintf(stdout,"  A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."); b2c_fprintf(stdout,"\n");
    // 11840 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 11850 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage05:
    // 11860 PRINT "'LRS' COMMAND = LONG RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"'LRS' COMMAND = LONG RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 11870 PRINT "  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    b2c_fprintf(stdout,"  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"); b2c_fprintf(stdout,"\n");
    // 11880 PRINT "  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"
    b2c_fprintf(stdout,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)"); b2c_fprintf(stdout,"\n");
    // 11890 PRINT "  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"
    b2c_fprintf(stdout,"  THE SCAN IS CODED IN THE FORM '###', WHERE THE UNITS DIGIT"); b2c_fprintf(stdout,"\n");
    // 11900 PRINT "  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"
    b2c_fprintf(stdout,"  IS THE NUMBER OF STARS, TENS DIGIT IS THE NUMBER OF STARBASES,"); b2c_fprintf(stdout,"\n");
    // 11910 PRINT "  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "
    b2c_fprintf(stdout,"  AND HUNDREDS DIGIT IS THE NUMBER OF KLINGONS. "); b2c_fprintf(stdout,"\n");
    // 11920 PRINT "    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."
    b2c_fprintf(stdout,"    EXAMPLE --   207 = 2 KLINGONS, ON STARBASES, 7 STARS."); b2c_fprintf(stdout,"\n");
    // 11930 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage06:
    // 11940 PRINT "'PHA' COMMAND = PHASER CONTROL"
    b2c_fprintf(stdout,"'PHA' COMMAND = PHASER CONTROL"); b2c_fprintf(stdout,"\n");
    // 11950 PRINT "  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"
    b2c_fprintf(stdout,"  ALLOWS YOU TO DESTROY THE KLINGON BATTLE CRUISERS BY"); b2c_fprintf(stdout,"\n");
    // 11960 PRINT "  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"
    b2c_fprintf(stdout,"  ZAPPING THEM WITH SUITABLY LARGE UNITS OF ENERGY TO"); b2c_fprintf(stdout,"\n");
    // 11970 PRINT "  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"
    b2c_fprintf(stdout,"  DEPLETE THEIR SHIELD POWER.  (REMEMBER, KLINGONS HAVE"); b2c_fprintf(stdout,"\n");
    // 11980 PRINT "  PHASERS, TOO!)"
    b2c_fprintf(stdout,"  PHASERS, TOO!)"); b2c_fprintf(stdout,"\n");
    // 11990 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage07:
    // 12000 PRINT "'TOR' COMMAND = PHOTON TORPEDO CONTROL"
    b2c_fprintf(stdout,"'TOR' COMMAND = PHOTON TORPEDO CONTROL"); b2c_fprintf(stdout,"\n");
    // 12010 PRINT "  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."
    b2c_fprintf(stdout,"  TORPEDO COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL."); b2c_fprintf(stdout,"\n");
    // 12020 PRINT "  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "
    b2c_fprintf(stdout,"  IF YOU HIT THE KLINGON VESSEL, HE IS DESTROYED AND "); b2c_fprintf(stdout,"\n");
    // 12030 PRINT "  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"
    b2c_fprintf(stdout,"  CANNOT FIRE BACK AT YOU.  IF YOU MISS, YOU ARE SUBJECT TO"); b2c_fprintf(stdout,"\n");
    // 12040 PRINT "  HIS PHASER FIRE."
    b2c_fprintf(stdout,"  HIS PHASER FIRE."); b2c_fprintf(stdout,"\n");
    // 12050 PRINT "     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"
    b2c_fprintf(stdout,"     NOTE: THE LIBRARY-COMPUTER ('COM' COMMAND) HAS AN"); b2c_fprintf(stdout,"\n");
    // 12060 PRINT "           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."
    b2c_fprintf(stdout,"           OPTION TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2)."); b2c_fprintf(stdout,"\n");
    // 12070 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage08:
    // 12080 PRINT "'SHE' COMMAND = SHIELD CONTROL"
    b2c_fprintf(stdout,"'SHE' COMMAND = SHIELD CONTROL"); b2c_fprintf(stdout,"\n");
    // 12090 PRINT "  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."
    b2c_fprintf(stdout,"  DEFINES NUMBER OF ENERGY UNITS TO BE ASSIGNED TO SHIELDS."); b2c_fprintf(stdout,"\n");
    // 12100 PRINT "  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "
    b2c_fprintf(stdout,"  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.  NOTE THAT THE "); b2c_fprintf(stdout,"\n");
    // 12110 PRINT "  TOTAL ENERGY INCLUDES SHIELD ENERGY."
    b2c_fprintf(stdout,"  TOTAL ENERGY INCLUDES SHIELD ENERGY."); b2c_fprintf(stdout,"\n");
    // 12120 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage09:
    // 12130 PRINT "'DAM' COMMAND = DAMAGE CONTROL REPORT"
    b2c_fprintf(stdout,"'DAM' COMMAND = DAMAGE CONTROL REPORT"); b2c_fprintf(stdout,"\n");
    // 12140 PRINT "  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"
    b2c_fprintf(stdout,"  GIVES STATE OF REPAIR OF ALL DEVICES, WHERE A NEGATIVE"); b2c_fprintf(stdout,"\n");
    // 12150 PRINT "  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"
    b2c_fprintf(stdout,"  'STATE OF REPAIR' SHOWS THAT THE DEVICE IS TEMPORARILY"); b2c_fprintf(stdout,"\n");
    // 12160 PRINT "  DAMAGED."
    b2c_fprintf(stdout,"  DAMAGED."); b2c_fprintf(stdout,"\n");
    // 12170 GOTO 11280
    goto DspHelpPage01;

  DspHelpPage10:
    // 12180 PRINT "'COM' COMMAND = LIBRARY-COMPUTER"
    b2c_fprintf(stdout,"'COM' COMMAND = LIBRARY-COMPUTER"); b2c_fprintf(stdout,"\n");
    // 12190 PRINT "  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"
    b2c_fprintf(stdout,"  THE LIBRARY-COMPUTER CONTAINS SIX OPTIONS:"); b2c_fprintf(stdout,"\n");
    // 12200 PRINT "  OPTION 0 = CUMULATIVE GALACTIC RECORD"
    b2c_fprintf(stdout,"  OPTION 0 = CUMULATIVE GALACTIC RECORD"); b2c_fprintf(stdout,"\n");
    // 12210 PRINT "     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"
    b2c_fprintf(stdout,"     WHICH SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS"); b2c_fprintf(stdout,"\n");
    // 12220 PRINT "     LONG RANGE SENSOR SCANS."
    b2c_fprintf(stdout,"     LONG RANGE SENSOR SCANS."); b2c_fprintf(stdout,"\n");
    // 12230 PRINT "  OPTION 1 = STATUS REPORT"
    b2c_fprintf(stdout,"  OPTION 1 = STATUS REPORT"); b2c_fprintf(stdout,"\n");
    // 12240 PRINT "     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"
    b2c_fprintf(stdout,"     WHICH SHOWS THE NUMBER OF KLINGONS, STARDATES, AND STARBASES"); b2c_fprintf(stdout,"\n");
    // 12250 PRINT "     REMAINING IN THE GAME."
    b2c_fprintf(stdout,"     REMAINING IN THE GAME."); b2c_fprintf(stdout,"\n");
    // 12260 PRINT "  OPTION 2 = PHOTON TORPEDO DATA"
    b2c_fprintf(stdout,"  OPTION 2 = PHOTON TORPEDO DATA"); b2c_fprintf(stdout,"\n");
    // 12270 PRINT "     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"
    b2c_fprintf(stdout,"     WHICH GIVES DIRECTIONS AND DISTANCE FROM THE ENTERPRISE"); b2c_fprintf(stdout,"\n");
    // 12280 PRINT "     TO ALL KLINGONS IN YOUR QUADRANT"
    b2c_fprintf(stdout,"     TO ALL KLINGONS IN YOUR QUADRANT"); b2c_fprintf(stdout,"\n");
    // 12290 PRINT "  OPTION 3 = STARBASE NAVIGATION DATA"
    b2c_fprintf(stdout,"  OPTION 3 = STARBASE NAVIGATION DATA"); b2c_fprintf(stdout,"\n");
    // 12300 PRINT "     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"
    b2c_fprintf(stdout,"     WHICH GIVES DIRECTION AND DISTANCE TO ANY STARBASE"); b2c_fprintf(stdout,"\n");
    // 12310 PRINT "     WITHIN YOUR QUADRANT"
    b2c_fprintf(stdout,"     WITHIN YOUR QUADRANT"); b2c_fprintf(stdout,"\n");
    // 12320 PRINT "  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"
    b2c_fprintf(stdout,"  OPTION 4 = DIRECTION/DISTANCE CALCULATOR"); b2c_fprintf(stdout,"\n");
    // 12330 PRINT "     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"
    b2c_fprintf(stdout,"     WHICH ALLOWS YOU TO ENTER COORDINATES FOR"); b2c_fprintf(stdout,"\n");
    // 12340 PRINT "     DIRECTION/DISTANCE CALCULATIONS."
    b2c_fprintf(stdout,"     DIRECTION/DISTANCE CALCULATIONS."); b2c_fprintf(stdout,"\n");
    // 12350 PRINT "  OPTION 5 = GALACTIC 'REGION NAME' MAP"
    b2c_fprintf(stdout,"  OPTION 5 = GALACTIC 'REGION NAME' MAP"); b2c_fprintf(stdout,"\n");
    // 12360 PRINT "     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"
    b2c_fprintf(stdout,"     WHICH PRINTS THE NAMES OF THE SIXTEEN MAJOR GALACTIC"); b2c_fprintf(stdout,"\n");
    // 12370 PRINT "     REGIONS REFERRED TO IN THE GAME."
    b2c_fprintf(stdout,"     REGIONS REFERRED TO IN THE GAME."); b2c_fprintf(stdout,"\n");
    // 12380 GOTO 11280
    goto DspHelpPage01;

  ExitHelp:
    // 12390 RETURN (Pseudo)
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM (VERSION "STREK7", 1/12/75 RCL)
    // 01010 REM
    // 01020 REM
    // 01030 REM ***         *** STAR TREK ***       ***
    // 01040 REM *** SIMULATION OF A MISSION OF THE STARSHIP ENTERPRISE.
    // 01050 REM *** AS SEEN ON THE STAR TREK TV SHOW.
    // 01060 REM *** ORIGINAL PROGRAM BY MIKE MAYFIELD, MODIFIED VERSION
    // 01070 REM *** PUBLISHED IN DEC'S "101 BASIC GAMES", BY DAVE AHL.
    // 01080 REM ***   MODIFICATIONS TO THE LATTER (PLUS DEBUGGING) BY 
    // 01090 REM ***      BOB LEEDOM -- APRIL & DECEMBER 1974
    // 01100 REM ***  WITH A LITTLE HELP FROM HIS FRIENDS...
    // 01110 REM *** COMMENTS, EPITHETS, AND SUGGESTIONS SOLICITED --
    // 01120 REM *** ADDRESS TO:   R.C.LEEDOM
    // 01130 REM ***     WESTINGHOUSE DEFENSE & ELECTRONIC SYSTEMS CNTR.
    // 01140 REM ***     BOX 746, M.S. 338   BALTIMORE, MD 21203
    // 01150 RANDOMIZE
    RANDOMIZE();
    // 01160 PRINT  TAB(15);"* * * STAR TREK * * *"
    b2c_fprintf(stdout,"%s* * * STAR TREK * * *",TAB(15)); b2c_fprintf(stdout,"\n");
    // 01170 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01180 PRINT "DO YOU NEED INSTRUCTIONS (YES/NO)";
    b2c_fprintf(stdout,"DO YOU NEED INSTRUCTIONS (YES/NO)"); 
    // 01190 INPUT A$
    // Start of Basic INPUT statement 01190
    printf(" ? ");
    char inpbuf_01190[100];
    if(fgets(inpbuf_01190,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01190=strtok(inpbuf_01190," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01190==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_01190;
        };
    }; // End of Basic INPUT statement 01190
    // 01200 IF A$<>"YES" GOTO 1270
    if(strcmp(tmpstr,"YES")!=0)goto GameStart;
    // 01210 PRINT "PLEASE WAIT  . . .";
    b2c_fprintf(stdout,"PLEASE WAIT  . . ."); 
    // 01220 GOSUB 11190
    DisplayHelp();
    // 01230 REM
    // 01240 REM ===============================================================
    // 01250 REM
    // 01260 REM  PROGRAM BEGINS HERE .....

  GameStart:
    // 01270 DIM Q$(8)
    // 01280 FOR I = 1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01290     Q$(I) = SPACE$(24)
        GLBpStr=SPACE(24);
        QuadrantInfo[(int)idx_i] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01300 NEXT I
        int dummy_1300=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01310 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8)
    // 01320 LET T=INT(RND(1)*20+20)*100
    StarDate = INT(RND(1)*20+20)*100;
    // 01330 LET P1=3.14159/4
    QuarterPi = 3.14159/4;
    // 01340 LET T0=T
    StartStarDate = StarDate;
    // 01350 LET T9=30
    CampaignLength = 30;
    // 01360 LET D0=0
    flgProtectedByStarbase = 0;
    // 01370 LET E0=3000
    InitialEnergy = 3000;
    // 01380 LET E=E0
    CurrentEnergy = InitialEnergy;
    // 01390 LET P=10
    PhotonTorpedoes = 10;
    // 01400 LET P0=P
    P0_int = PhotonTorpedoes;
    // 01410 LET S9=200
    S9_int = 200;
    // 01420 LET S=0
    EnterpriseSheilds = 0;
    // 01430 DEF FND(D)=SQR((K(I,1)-S1)^2+(K(I,2)-S2)^2)
    // 01440 REM
    // 01450 REM ===============================================================
    // 01460 REM
    // 01470 REM INITIALIZE INTERPRISE'S POSITION
    // 01480 LET Q1=INT(RND(1)*8+1)
    EnterpriseQuadrantX = INT(RND(1)*8+1);
    // 01490 LET Q2=INT(RND(1)*8+1)
    EnterpriseQuadrantY = INT(RND(1)*8+1);
    // 01500 LET S1=INT(RND(1)*8+1)
    EnterpriseSectorX = INT(RND(1)*8+1);
    // 01510 LET S2=INT(RND(1)*8+1)
    EnterpriseSectorY = INT(RND(1)*8+1);
    // 01520 MAT C=ZER
    for(int d0=0;d0<10;d0++){
        for(int d1=0;d1<3;d1++){
            C_int_arr[d0][d1]=0;
        }
    }
    // 01530 LET C(4,1)=-1
    C_int_arr[(int)4][(int)1] = -1;
    // 01540 LET C(3,1)=-1
    C_int_arr[(int)3][(int)1] = -1;
    // 01550 LET C(2,1)=-1
    C_int_arr[(int)2][(int)1] = -1;
    // 01560 LET C(4,2)=-1
    C_int_arr[(int)4][(int)2] = -1;
    // 01570 LET C(5,2)=-1
    C_int_arr[(int)5][(int)2] = -1;
    // 01580 LET C(6,2)=-1
    C_int_arr[(int)6][(int)2] = -1;
    // 01590 LET C(1,2)=1
    C_int_arr[(int)1][(int)2] = 1;
    // 01600 LET C(2,2)=1
    C_int_arr[(int)2][(int)2] = 1;
    // 01610 LET C(6,1)=1
    C_int_arr[(int)6][(int)1] = 1;
    // 01620 LET C(7,1)=1
    C_int_arr[(int)7][(int)1] = 1;
    // 01630 LET C(8,1)=1
    C_int_arr[(int)8][(int)1] = 1;
    // 01640 LET C(8,2)=1
    C_int_arr[(int)8][(int)2] = 1;
    // 01650 LET C(9,2)=1
    C_int_arr[(int)9][(int)2] = 1;
    // 01660 DIM D(8)
    // 01670 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01680     LET D(I)=0
        DamageControl[(int)idx_i] = 0;
        // 01690 NEXT I
        int dummy_1690=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01700 DIM D$(8)
    // 01710 RESTORE
    Data_Index=0;
    RestoreData(0);
    // 01720 READ D$(1),D$(2),D$(3),D$(4),D$(5),D$(6),D$(7),D$(8)
    CommandNames[(int)1] = Get_Data_String();
    CommandNames[(int)2] = Get_Data_String();
    CommandNames[(int)3] = Get_Data_String();
    CommandNames[(int)4] = Get_Data_String();
    CommandNames[(int)5] = Get_Data_String();
    CommandNames[(int)6] = Get_Data_String();
    CommandNames[(int)7] = Get_Data_String();
    CommandNames[(int)8] = Get_Data_String();
    // 01730 DATA "WARP ENGINES","S.R. SENSORS","L.R. SENSORS","PHASER CNTRL"
    // 01740 DATA "PHOTON TUBES","DAMAGE CNTRL","SHIELD CNTRL","COMPUTER    "
    // 01750 LET G4$="III"
    GLBpStr="III";
    QuadrantNameSuffix = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 DIM G1$(16)
    // 01770 FOR I=1 TO 16
    for(idx_i=1;idx_i<=16;idx_i++){
        // 01780     READ G1$(I)
        QuadrantName[(int)idx_i] = Get_Data_String();
        // 01790 NEXT I
        int dummy_1790=0; // Ignore this line.
    }; // End-For(idx_i)
    // 01800 DATA "ANTARES","SIRIUS","RIGEL","DENEB","PROCYON","CAPELLA","VEGA"
    // 01810 DATA "BETELGEUSE","CANOPUS","ALDEBARAN","ALTAIR","REGULUS"
    // 01820 DATA "SAGITTARIUS","ARCTURUS","POLLUX","SPICA"
    // 01830 LET B9=0
    StarbaseTotal = 0;
    // 01840 LET K9=0
    KlingonsTotal = 0;
    // 01850 LET A1$="NSLPTSDCX"
    GLBpStr="NSLPTSDCX";
    CommandInitials = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01860 REM
    // 01870 REM ===============================================================
    // 01880 REM
    // 01890 REM  SET UP WHAT EXISTS IN GALAXY ...
    // 01900 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 01910     FOR J=1 TO 8
        for(idx_j=1;idx_j<=8;idx_j++){
            // 01920 	LET R1=RND(1)
            RandomNbr1 = RND(1);
            // 01930 	IF R1>.98 GOTO 1980
            if(RandomNbr1>0.98)goto SectorKlingons3;
            // 01940 	IF R1>.95 GOTO 2010
            if(RandomNbr1>0.95)goto SectorKlingons2;
            // 01950 	IF R1>.8  GOTO 2040
            if(RandomNbr1>0.8)goto SectorKlingons1;
            // 01960 	LET K3=0
            KlingonsSector = 0;
            // 01970 	GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons3:
            // 01980 	LET K3=3
            KlingonsSector = 3;
            // 01990 	LET K9=K9+3
            KlingonsTotal = KlingonsTotal+3;
            // 02000 	GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons2:
            // 02010 	LET K3=2
            KlingonsSector = 2;
            // 02020 	LET K9=K9+2
            KlingonsTotal = KlingonsTotal+2;
            // 02030 	GOTO 2060
            goto NoKlingonsInSector;

  SectorKlingons1:
            // 02040 	LET K3=1
            KlingonsSector = 1;
            // 02050 	LET K9=K9+1
            KlingonsTotal = KlingonsTotal+1;

  NoKlingonsInSector:
            // 02060 	LET R1=RND(1)
            RandomNbr1 = RND(1);
            // 02070 	IF R1>.96 GOTO 2100
            if(RandomNbr1>0.96)goto SectorStarbase;
            // 02080 	LET B3=0
            StarbaseSector = 0;
            // 02090 	GOTO 2120
            goto NoStarbases;

  SectorStarbase:
            // 02100 	LET B3=1
            StarbaseSector = 1;
            // 02110 	LET B9=B9+1
            StarbaseTotal = StarbaseTotal+1;

  NoStarbases:
            // 02120 	LET S3=INT(RND(1)*8+1)
            SectorStars = INT(RND(1)*8+1);
            // 02130 	LET G(I,J)=K3*100+B3*10+S3
            SectorPopulation[(int)idx_i][(int)idx_j] = KlingonsSector*100+StarbaseSector*10+SectorStars;
            // 02140 	REM K3=#KLINGONS B3=#STARBASES S3=#STARS
            // 02150 	LET Z(I,J)=0
            Z_int_arr[(int)idx_i][(int)idx_j] = 0;
            // 02160     NEXT J
            int dummy_2160=0; // Ignore this line.
        }; // End-For(idx_j)
        // 02170 NEXT I
        int dummy_2170=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02180 LET K7=K9
    K7_int = KlingonsTotal;
    // 02190 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02200 LET X0$=" IS "
    GLBpStr=" IS ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02210 IF B9<>0 GOTO 2270
    if(StarbaseTotal!=0)goto GotNufStarbases;
    // 02220 LET B9=1
    StarbaseTotal = 1;
    // 02230 IF G(6,3)>=200 GOTO 2260
    if(SectorPopulation[(int)6][(int)3]>=200)goto AddQ63Starbase;
    // 02240 LET G(6,3)=G(6,3)+100
    SectorPopulation[(int)6][(int)3] = SectorPopulation[(int)6][(int)3]+100;
    // 02250 LET K9=K9+1
    KlingonsTotal = KlingonsTotal+1;

  AddQ63Starbase:
    // 02260 LET G(6,3)=G(6,3)+10
    SectorPopulation[(int)6][(int)3] = SectorPopulation[(int)6][(int)3]+10;

  GotNufStarbases:
    // 02270 IF B9=1 GOTO 2320
    if(StarbaseTotal==1)goto EnterpriseOrders;
    // 02280 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02290 LET X0$=" ARE "
    GLBpStr=" ARE ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02300 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 02310 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");

  EnterpriseOrders:
    // 02320 PRINT "YOUR ORDERS ARE AS FOLLOWS:"
    b2c_fprintf(stdout,"YOUR ORDERS ARE AS FOLLOWS:"); b2c_fprintf(stdout,"\n");
    // 02330 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 02340 PRINT "    DESTROY THE "K9" KLINGON WARSHIPS WHICH HAVE INVADED"
    b2c_fprintf(stdout,"    DESTROY THE  %d  KLINGON WARSHIPS WHICH HAVE INVADED",KlingonsTotal); b2c_fprintf(stdout,"\n");
    // 02350 PRINT "  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
    b2c_fprintf(stdout,"  THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"); b2c_fprintf(stdout,"\n");
    // 02360 PRINT "  ON STARDATE"T0+T9"; THIS GIVES YOU"T9" DAYS.  THERE"X0$
    b2c_fprintf(stdout,"  ON STARDATE%d; THIS GIVES YOU %d  DAYS.  THERE%s",StartStarDate+CampaignLength,CampaignLength,X0_str); b2c_fprintf(stdout,"\n");
    // 02370 PRINT " "B9"STARBASE";X$" IN THE GALAXY FOR RESUPPLYING YOUR SHIP."
    b2c_fprintf(stdout,"  %d STARBASE%s IN THE GALAXY FOR RESUPPLYING YOUR SHIP.",StarbaseTotal,X_str); b2c_fprintf(stdout,"\n");
    // 02380 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 02390 PRINT "HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---";
    b2c_fprintf(stdout,"HIT 'RETURN' WHEN READY TO ASSUME COMMAND ---"); 
    // 02400 INPUT A$
    // Start of Basic INPUT statement 02400
    printf(" ? ");
    char inpbuf_02400[100];
    if(fgets(inpbuf_02400,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02400=strtok(inpbuf_02400," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02400==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_02400;
        };
    }; // End of Basic INPUT statement 02400
    // 02410 REM
    // 02420 REM ===============================================================
    // 02430 REM
    // 02440 REM *** HERE ANY TIME ENTER NEW QUADRANT ...

  EnterNewQuadrant:
    // 02450 LET Z4=Q1
    Z4_int = EnterpriseQuadrantX;
    // 02460 LET Z5=Q2
    Z5_int = EnterpriseQuadrantY;
    // 02470 LET K3=0
    KlingonsSector = 0;
    // 02480 LET B3=0
    StarbaseSector = 0;
    // 02490 LET S3=0
    SectorStars = 0;
    // 02500 LET G5=0
    G5_int = 0;
    // 02510 LET D4=.5*RND(1)
    D4_flt = 0.5*RND(1);
    // 02520 FOR I7 = 1 TO 8
    for(QuadIdx=1;QuadIdx<=8;QuadIdx++){
        // 02530     Q$(I7)=SPACE$(24)
        GLBpStr=SPACE(24);
        QuadrantInfo[(int)QuadIdx] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 02540 NEXT I7
        int dummy_2540=0; // Ignore this line.
    }; // End-For(QuadIdx)
    // 02550 IF Q1<1 GOTO 2760
    if(EnterpriseQuadrantX<1)goto Lbl_02760;
    // 02560 IF Q1>8 GOTO 2760
    if(EnterpriseQuadrantX>8)goto Lbl_02760;
    // 02570 IF Q2<1 GOTO 2760
    if(EnterpriseQuadrantY<1)goto Lbl_02760;
    // 02580 IF Q2>8 GOTO 2760
    if(EnterpriseQuadrantY>8)goto Lbl_02760;
    // 02590 GOSUB 10990
    GetQuadrantName();
    // 02600 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 02610 IF T<>T0 GOTO 2650
    if(StarDate!=StartStarDate)goto MiddleOfGame;
    // 02620 PRINT "YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"
    b2c_fprintf(stdout,"YOUR MISSION BEGINS WITH YOUR STARSHIP LOCATED"); b2c_fprintf(stdout,"\n");
    // 02630 PRINT "IN THE GALACTIC QUADRANT, '"G2$"'."
    b2c_fprintf(stdout,"IN THE GALACTIC QUADRANT, '%s'.",QuadName); b2c_fprintf(stdout,"\n");
    // 02640 GOTO 2660
    goto Lbl_02660;

  MiddleOfGame:
    // 02650 PRINT "NOW ENTERING "G2$" QUADRANT ..."
    b2c_fprintf(stdout,"NOW ENTERING %s QUADRANT ...",QuadName); b2c_fprintf(stdout,"\n");

  Lbl_02660:
    // 02660 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 02670 LET X=G(Q1,Q2)*.01
    X_int = SectorPopulation[(int)EnterpriseQuadrantX][(int)EnterpriseQuadrantY]*0.01;
    // 02680 LET K3=INT(X)
    KlingonsSector = INT(X_int);
    // 02690 LET B3=INT((X-K3)*10)
    StarbaseSector = INT((X_int-KlingonsSector)*10);
    // 02700 LET S3=G(Q1,Q2)-INT(G(Q1,Q2)*.1)*10
    SectorStars = SectorPopulation[(int)EnterpriseQuadrantX][(int)EnterpriseQuadrantY]-INT(SectorPopulation[(int)EnterpriseQuadrantX][(int)EnterpriseQuadrantY]*0.1)*10;
    // 02710 IF K3=0 GOTO 2750
    if(KlingonsSector==0)goto Lbl_02750;
    // 02720 PRINT "COMBAT AREA      CONDITION RED"
    b2c_fprintf(stdout,"COMBAT AREA      CONDITION RED"); b2c_fprintf(stdout,"\n");
    // 02730 IF S>200 GOTO 2750
    if(EnterpriseSheilds>200)goto Lbl_02750;
    // 02740 PRINT "   SHIELDS DANGEROUSLY LOW"
    b2c_fprintf(stdout,"   SHIELDS DANGEROUSLY LOW"); b2c_fprintf(stdout,"\n");

  Lbl_02750:
    // 02750 MAT K=ZER
    for(int d0=0;d0<4;d0++){
        for(int d1=0;d1<4;d1++){
            KlingonInfoLocAndDamage[d0][d1]=0;
        }
    }

  Lbl_02760:
    // 02760 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 02770     LET K(I,3)=0
        KlingonInfoLocAndDamage[(int)idx_i][(int)3] = 0;
        // 02780 NEXT I
        int dummy_2780=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02790 REM
    // 02800 REM ===============================================================
    // 02810 REM
    // 02820 REM POSITION ENTERPRISE IN QUADRANT, THEN PLACE 'K3' KLINGONS
    // 02830 REM  'B3' STARBASES, AND 'S3' STARS ELSEWHERE.
    // 02840 LET A$="<*>"
    GLBpStr="<*>";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02850 LET Z1=S1
    QuadY = EnterpriseSectorX;
    // 02860 LET Z2=S2
    QuadX = EnterpriseSectorY;
    // 02870 GOSUB 10570
    InsertInQuadrant();
    // 02880 FOR I=1 TO K3
    for(idx_i=1;idx_i<=KlingonsSector;idx_i++){
        // 02890     GOSUB 10430
        Routine_10430();
        // 02900     LET A$="+++"
        GLBpStr="+++";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 02910     LET Z1=R1
        QuadY = RandomNbr1;
        // 02920     LET Z2=R2
        QuadX = RandomNbr2;
        // 02930     GOSUB 10570
        InsertInQuadrant();
        // 02940     LET K(I,1)=R1
        KlingonInfoLocAndDamage[(int)idx_i][(int)1] = RandomNbr1;
        // 02950     LET K(I,2)=R2
        KlingonInfoLocAndDamage[(int)idx_i][(int)2] = RandomNbr2;
        // 02960     LET K(I,3)=200
        KlingonInfoLocAndDamage[(int)idx_i][(int)3] = 200;
        // 02970 NEXT I
        int dummy_2970=0; // Ignore this line.
    }; // End-For(idx_i)
    // 02980 FOR I=1 TO B3
    for(idx_i=1;idx_i<=StarbaseSector;idx_i++){
        // 02990     GOSUB 10430
        Routine_10430();
        // 03000     LET A$=">!<"
        GLBpStr=">!<";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03010     LET Z1=R1
        QuadY = RandomNbr1;
        // 03020     LET Z2=R2
        QuadX = RandomNbr2;
        // 03030     GOSUB 10570
        InsertInQuadrant();
        // 03040     LET B4=Z1
        B4_int = QuadY;
        // 03050     LET B5=Z2
        B5_int = QuadX;
        // 03060 NEXT I
        int dummy_3060=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03070 FOR I=1 TO S3
    for(idx_i=1;idx_i<=SectorStars;idx_i++){
        // 03080     GOSUB 10430
        Routine_10430();
        // 03090     LET A$=" * "
        GLBpStr=" * ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03100     LET Z1=R1
        QuadY = RandomNbr1;
        // 03110     LET Z2=R2
        QuadX = RandomNbr2;
        // 03120     GOSUB 10570
        InsertInQuadrant();
        // 03130 NEXT I
        int dummy_3130=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_03140:
    // 03140 GOSUB 9540
    DspSRSAndStatus();

  Lbl_03150:
    // 03150 IF S+E<=10 GOTO 3180
    if(EnterpriseSheilds+CurrentEnergy<=10)goto Lbl_03180;
    // 03160 IF E>10 GOTO 3220
    if(CurrentEnergy>10)goto Lbl_03220;
    // 03170 IF D(7)>=0 GOTO 3220
    if(DamageControl[(int)7]>=0)goto Lbl_03220;

  Lbl_03180:
    // 03180 PRINT CHR$(7)"** FATAL ERROR **"CHR$(7)"   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!"
    b2c_fprintf(stdout,"%s** FATAL ERROR **%s   YOU'VE JUST STRANDED YOUR SHIP IN SPACE!!",CHR(7),CHR(7)); b2c_fprintf(stdout,"\n");
    // 03190 PRINT "YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"
    b2c_fprintf(stdout,"YOU HAVE INSUFFICIENT MANEUVERING ENERGY, AND SHIELD CONTROL"); b2c_fprintf(stdout,"\n");
    // 03200 PRINT "IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"
    b2c_fprintf(stdout,"IS PRESENTLY INCAPABLE OF CROSS-CIRCUITING TO ENGINE ROOM!"); b2c_fprintf(stdout,"\n");
    // 03210 GOTO 7460
    goto Lbl_07460;

  Lbl_03220:
    // 03220 PRINT "COMMAND";
    b2c_fprintf(stdout,"COMMAND"); 
    // 03230 INPUT A$
    // Start of Basic INPUT statement 03230
    printf(" ? ");
    char inpbuf_03230[100];
    if(fgets(inpbuf_03230,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03230=strtok(inpbuf_03230," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03230==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_03230;
        };
    }; // End of Basic INPUT statement 03230
    // 03240 FOR I=1 TO 9
    for(idx_i=1;idx_i<=9;idx_i++){
        // 03250     IF MID$(A$,1,1)<>MID$(A1$,I,1) GOTO 3310
        if(strcmp(MID(tmpstr,1,1),MID(CommandInitials,idx_i,1))!=0)goto NextCmdInitial;
        // 03260     IF I<>2 GOTO 3300
        if(idx_i!=2)goto GotCmdIndex;
        // 03270     IF LEN(A$)<2 GOTO 3300
        if(LEN(tmpstr)<2)goto GotCmdIndex;
        // 03280     IF MID$(A$,2,1)="R" GOTO 3300
        if(strcmp(MID(tmpstr,2,1),"R")==0)goto GotCmdIndex;
        // 03290     LET I=6
        idx_i = 6;

  GotCmdIndex:
        // 03300     ON I GOTO 3480, 3140, 5250, 5540, 6010, 6950, 7140, 7680, 7490
        switch((int)(idx_i)){
            case 1: goto Lbl_03480;
            case 2: goto Lbl_03140;
            case 3: goto Lbl_05250;
            case 4: goto Lbl_05540;
            case 5: goto Lbl_06010;
            case 6: goto Lbl_06950;
            case 7: goto Lbl_07140;
            case 8: goto Lbl_07680;
            case 9: goto Lbl_07490;
            default: break; 
        };

  NextCmdInitial:
        // 03310 NEXT I
        int dummy_3310=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03320 PRINT "ENTER ONE OF THE FOLLOWING:"
    b2c_fprintf(stdout,"ENTER ONE OF THE FOLLOWING:"); b2c_fprintf(stdout,"\n");
    // 03330 PRINT "  NAV (TO SET COURSE)"
    b2c_fprintf(stdout,"  NAV (TO SET COURSE)"); b2c_fprintf(stdout,"\n");
    // 03340 PRINT "  SRS (FOR SHORT RANGE SENSOR SCAN)"
    b2c_fprintf(stdout,"  SRS (FOR SHORT RANGE SENSOR SCAN)"); b2c_fprintf(stdout,"\n");
    // 03350 PRINT "  LRS (FOR LONG RANGE SENSOR SCAN)"
    b2c_fprintf(stdout,"  LRS (FOR LONG RANGE SENSOR SCAN)"); b2c_fprintf(stdout,"\n");
    // 03360 PRINT "  PHA (TO FIRE PHASERS)"
    b2c_fprintf(stdout,"  PHA (TO FIRE PHASERS)"); b2c_fprintf(stdout,"\n");
    // 03370 PRINT "  TOR (TO FIRE PHOTON TORPEDOES)"
    b2c_fprintf(stdout,"  TOR (TO FIRE PHOTON TORPEDOES)"); b2c_fprintf(stdout,"\n");
    // 03380 PRINT "  SHE (TO RAISE OR LOWER SHEILDS)"
    b2c_fprintf(stdout,"  SHE (TO RAISE OR LOWER SHEILDS)"); b2c_fprintf(stdout,"\n");
    // 03390 PRINT "  DAM (FOR DAMAGE CONTROL REPORT)"
    b2c_fprintf(stdout,"  DAM (FOR DAMAGE CONTROL REPORT)"); b2c_fprintf(stdout,"\n");
    // 03400 PRINT "  COM (TO CALL ON LIBRARY-COMPUTER)"
    b2c_fprintf(stdout,"  COM (TO CALL ON LIBRARY-COMPUTER)"); b2c_fprintf(stdout,"\n");
    // 03410 PRINT "  XXX (TO RESIGN YOUR COMMAND)"
    b2c_fprintf(stdout,"  XXX (TO RESIGN YOUR COMMAND)"); b2c_fprintf(stdout,"\n");
    // 03420 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 03430 GOTO 3150
    goto Lbl_03150;
    // 03440 REM
    // 03450 REM ===============================================================
    // 03460 REM
    // 03470 REM  COURSE CONTROL BEGINS HERE

  Lbl_03480:
    // 03480 PRINT "COURSE(1-9)";
    b2c_fprintf(stdout,"COURSE(1-9)"); 
    // 03490 INPUT C1
    // Start of Basic INPUT statement 03490
    printf(" ? ");
    char inpbuf_03490[100];
    if(fgets(inpbuf_03490,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03490=strtok(inpbuf_03490," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03490==nullptr){
            C1_int = 0;
        }else{
            C1_int = atof(ps_03490);
        };
    }; // End of Basic INPUT statement 03490
    // 03500 IF C1>=1 GOTO 3530
    if(C1_int>=1)goto Lbl_03530;

  Lbl_03510:
    // 03510 PRINT "  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    b2c_fprintf(stdout,"  LT. SULU REPORTS, 'INCORRECT COURSE DATA, SIR!'"); b2c_fprintf(stdout,"\n");
    // 03520 GOTO 3150
    goto Lbl_03150;

  Lbl_03530:
    // 03530 IF C1<9 GOTO 3560
    if(C1_int<9)goto Lbl_03560;
    // 03540 IF C1>9 GOTO 3510
    if(C1_int>9)goto Lbl_03510;
    // 03550 GOTO 3510
    goto Lbl_03510;

  Lbl_03560:
    // 03560 PRINT "WARP FACTOR (0-8)";
    b2c_fprintf(stdout,"WARP FACTOR (0-8)"); 
    // 03570 INPUT W1
    // Start of Basic INPUT statement 03570
    printf(" ? ");
    char inpbuf_03570[100];
    if(fgets(inpbuf_03570,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03570=strtok(inpbuf_03570," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03570==nullptr){
            WarpFactor = 0;
        }else{
            WarpFactor = atof(ps_03570);
        };
    }; // End of Basic INPUT statement 03570
    // 03580 IF W1 > 0 GOTO 3620
    if(WarpFactor>0)goto Lbl_03620;
    // 03590 PRINT "  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "
    b2c_fprintf(stdout,"  ENSIGN CHEKOV REPORTS INSTURMENTS NOT MADE TO "); b2c_fprintf(stdout,"\n");
    // 03600 PRINT "          SET WARP "W1" !"
    b2c_fprintf(stdout,"          SET WARP  %d  !",WarpFactor); b2c_fprintf(stdout,"\n");
    // 03610 GOTO 3150
    goto Lbl_03150;

  Lbl_03620:
    // 03620 IF W1<=8 GOTO 3660
    if(WarpFactor<=8)goto Lbl_03660;
    // 03630 PRINT "  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"
    b2c_fprintf(stdout,"  CHIEF ENGINEER SCOTT REPORTS 'THE ENGINES WON'T"); b2c_fprintf(stdout,"\n");
    // 03640 PRINT "         TAKE WARP "W1"!/"
    b2c_fprintf(stdout,"         TAKE WARP  %d !/",WarpFactor); b2c_fprintf(stdout,"\n");
    // 03650 GOTO 3150
    goto Lbl_03150;

  Lbl_03660:
    // 03660 IF D(1)>=0 GOTO 3700
    if(DamageControl[(int)1]>=0)goto Lbl_03700;
    // 03670 IF W1<=0.2 GOTO 3700
    if(WarpFactor<=0.2)goto Lbl_03700;
    // 03680 PRINT "WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"
    b2c_fprintf(stdout,"WARP ENGINES ARE DAMAGED.  MAXIMUM SPEED = WARP 0.2"); b2c_fprintf(stdout,"\n");
    // 03690 GOTO 3480
    goto Lbl_03480;

  Lbl_03700:
    // 03700 LET N=INT(W1*8+.5)
    WarpEnergy = INT(WarpFactor*8+0.5);
    // 03710 IF E-N>=0 GOTO 3830
    if(CurrentEnergy-WarpEnergy>=0)goto Lbl_03830;
    // 03720 PRINT "ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"
    b2c_fprintf(stdout,"ENGINEERING REPORTS 'INSUFFICIENT ENERGY AVAILABLE"); b2c_fprintf(stdout,"\n");
    // 03730 PRINT "   FOR MANEUVERING AT WARP"W1"!'"
    b2c_fprintf(stdout,"   FOR MANEUVERING AT WARP %d !'",WarpFactor); b2c_fprintf(stdout,"\n");
    // 03740 IF S<N-E GOTO 3150
    if(EnterpriseSheilds<WarpEnergy-CurrentEnergy)goto Lbl_03150;
    // 03750 IF D(7)<0 GOTO 3150
    if(DamageControl[(int)7]<0)goto Lbl_03150;
    // 03760 PRINT "DEFLECTOR CONTROL ROOM ACKNOWLEGES"S" UNITS"
    b2c_fprintf(stdout,"DEFLECTOR CONTROL ROOM ACKNOWLEGES %d  UNITS",EnterpriseSheilds); b2c_fprintf(stdout,"\n");
    // 03770 PRINT "   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."
    b2c_fprintf(stdout,"   OF ENERGY PRESENTLY DEPLOYED TO SHIELDS."); b2c_fprintf(stdout,"\n");
    // 03780 GOTO 6950
    goto Lbl_06950;
    // 03790 REM
    // 03800 REM ===============================================================
    // 03810 REM
    // 03820 REM KLINGONS MOVE/FIRE ON MOVING STARSHIP ...

  Lbl_03830:
    // 03830 FOR I=1 TO K3
    for(idx_i=1;idx_i<=KlingonsSector;idx_i++){
        // 03840     IF K(1,3)<=0 GOTO 3940
        if(KlingonInfoLocAndDamage[(int)1][(int)3]<=0)goto Lbl_03940;
        // 03850     LET A$="   "
        GLBpStr="   ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03860     LET Z1=K(I,1)
        QuadY = KlingonInfoLocAndDamage[(int)idx_i][(int)1];
        // 03870     LET Z2=K(I,2)
        QuadX = KlingonInfoLocAndDamage[(int)idx_i][(int)2];
        // 03880     GOSUB 10570
        InsertInQuadrant();
        // 03890     GOSUB 10430
        Routine_10430();
        // 03900     LET K(I,1)=Z1
        KlingonInfoLocAndDamage[(int)idx_i][(int)1] = QuadY;
        // 03910     LET K(I,2)=Z2
        KlingonInfoLocAndDamage[(int)idx_i][(int)2] = QuadX;
        // 03920     LET A$="+++"
        GLBpStr="+++";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 03930     GOSUB 10570
        InsertInQuadrant();

  Lbl_03940:
        // 03940 NEXT I
        int dummy_3940=0; // Ignore this line.
    }; // End-For(idx_i)
    // 03950 GOSUB 9270
    KlingonAttack();
    // 03960 LET D1=0
    D1_int = 0;
    // 03970 LET D6=W1
    D6_int = WarpFactor;
    // 03980 IF W1<1 GOTO 4040
    if(WarpFactor<1)goto Lbl_04040;
    // 03990 LET D6=1
    D6_int = 1;
    // 04000 REM
    // 04010 REM ===============================================================
    // 04020 REM
    // 04030 REM MAKE REPAIRS TO SHIP

  Lbl_04040:
    // 04040 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 04050     IF D(I)>=0 GOTO 4150
        if(DamageControl[(int)idx_i]>=0)goto Lbl_04150;
        // 04060     LET D(I)=D(I)+6
        DamageControl[(int)idx_i] = DamageControl[(int)idx_i]+6;
        // 04070     IF D(I)<0 GOTO 4150
        if(DamageControl[(int)idx_i]<0)goto Lbl_04150;
        // 04080     IF D1=1 GOTO 4110
        if(D1_int==1)goto Lbl_04110;
        // 04090     LET D1=1
        D1_int = 1;
        // 04100     PRINT "DAMAGE CONTROL REPORT:"
        b2c_fprintf(stdout,"DAMAGE CONTROL REPORT:"); b2c_fprintf(stdout,"\n");

  Lbl_04110:
        // 04110     PRINT TAB(8);
        b2c_fprintf(stdout,"%s",TAB(8)); 
        // 04120     LET R1=I
        RandomNbr1 = idx_i;
        // 04130     GOSUB 10810
        DspDeviceName();
        // 04140     PRINT " REPAIR COMPLETED"
        b2c_fprintf(stdout," REPAIR COMPLETED"); b2c_fprintf(stdout,"\n");

  Lbl_04150:
        // 04150 NEXT I
        int dummy_4150=0; // Ignore this line.
    }; // End-For(idx_i)
    // 04160 REM
    // 04170 REM ===============================================================
    // 04180 REM
    // 04190 REM DAMAGE/IMPROVEMENT DURING SOME VES
    // 04200 IF RND(1)>.2 GOTO 4400
    if(RND(1)>0.2)goto Lbl_04400;
    // 04210 LET R1=INT(RND(1)*8+1)
    RandomNbr1 = INT(RND(1)*8+1);
    // 04220 IF RND(1)>=.6 GOTO 4300
    if(RND(1)>=0.6)goto Lbl_04300;
    // 04230 LET D(R1)=D(R1)-(RND(1)*5+1)
    DamageControl[(int)RandomNbr1] = DamageControl[(int)RandomNbr1]-(RND(1)*5+1);
    // 04240 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 04250 PRINT "DAMAGE CONTROL REPORT:";
    b2c_fprintf(stdout,"DAMAGE CONTROL REPORT:"); 
    // 04260 GOSUB 10810
    DspDeviceName();
    // 04270 PRINT " DAMAGED"
    b2c_fprintf(stdout," DAMAGED"); b2c_fprintf(stdout,"\n");
    // 04280 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 04290 GOTO 4400
    goto Lbl_04400;

  Lbl_04300:
    // 04300 LET D(R1)=D(R1)+(RND(1)*3+1)
    DamageControl[(int)RandomNbr1] = DamageControl[(int)RandomNbr1]+(RND(1)*3+1);
    // 04310 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 04320 PRINT "DAMAGE CONTROL REPORT:";
    b2c_fprintf(stdout,"DAMAGE CONTROL REPORT:"); 
    // 04330 GOSUB 10810
    DspDeviceName();
    // 04340 PRINT " STATE OF REPAIR IMPROVED"
    b2c_fprintf(stdout," STATE OF REPAIR IMPROVED"); b2c_fprintf(stdout,"\n");
    // 04350 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 04360 REM
    // 04370 REM ===============================================================
    // 04380 REM
    // 04390 REM BEGIN MOVING STARSHIP **

  Lbl_04400:
    // 04400 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04410 LET Z1=INT(S1)
    QuadY = INT(EnterpriseSectorX);
    // 04420 LET Z2=INT(S2)
    QuadX = INT(EnterpriseSectorY);
    // 04430 GOSUB 10570
    InsertInQuadrant();
    // 04440 LET X1=-SIN((C1-1)*P1)
    X1_int = -SIN((C1_int-1)*QuarterPi);
    // 04450 LET X=S1
    X_int = EnterpriseSectorX;
    // 04460 LET Y=S2
    Y_int = EnterpriseSectorY;
    // 04470 LET X2= COS((C1-1)*P1)
    X2_int = COS((C1_int-1)*QuarterPi);
    // 04480 LET Q4=Q1
    Q4_int = EnterpriseQuadrantX;
    // 04490 LET Q5=Q2
    Q5_int = EnterpriseQuadrantY;
    // 04500 FOR I=1 TO N
    for(idx_i=1;idx_i<=WarpEnergy;idx_i++){
        // 04510     LET S1=S1+X1
        EnterpriseSectorX = EnterpriseSectorX+X1_int;
        // 04520     LET S2=S2+X2
        EnterpriseSectorY = EnterpriseSectorY+X2_int;
        // 04530     IF S1<0.5 GOTO 4790
        if(EnterpriseSectorX<0.5)goto Lbl_04790;
        // 04540     IF S1>=8.5 GOTO 4790
        if(EnterpriseSectorX>=8.5)goto Lbl_04790;
        // 04550     IF S2<0.5 GOTO 4790
        if(EnterpriseSectorY<0.5)goto Lbl_04790;
        // 04560     IF S2>=8.5 GOTO 4790
        if(EnterpriseSectorY>=8.5)goto Lbl_04790;
        // 04570     IF MID$(Q$(INT(S1+.5)),(3*INT(S2+.5)-2),3) = "   " GOTO 4630
        if(strcmp(MID(QuadrantInfo[(int)INT(EnterpriseSectorX+0.5)],(3*INT(EnterpriseSectorY+0.5)-2),3),"   ")==0)goto Lbl_04630;
        // 04580     LET S1=S1-X1
        EnterpriseSectorX = EnterpriseSectorX-X1_int;
        // 04590     LET S2=S2-X2
        EnterpriseSectorY = EnterpriseSectorY-X2_int;
        // 04600     PRINT "WARP ENGINES SHUT DOWN AT SECTOR "INT(S1+.5);
        b2c_fprintf(stdout,"WARP ENGINES SHUT DOWN AT SECTOR  %d ",INT(EnterpriseSectorX+0.5)); 
        // 04610     PRINT ","INT(S2+.5)" DUE TO BAD NAVIGATION"
        b2c_fprintf(stdout,", %d  DUE TO BAD NAVIGATION",INT(EnterpriseSectorY+0.5)); b2c_fprintf(stdout,"\n");
        // 04620     GOTO 4640
        goto Lbl_04640;

  Lbl_04630:
        // 04630 NEXT I
        int dummy_4630=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_04640:
    // 04640 LET A$="<*>"
    GLBpStr="<*>";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 04650 S1=INT(S1+0.5)
    EnterpriseSectorX = INT(EnterpriseSectorX+0.5);
    // 04660 S2=INT(S2+0.5)
    EnterpriseSectorY = INT(EnterpriseSectorY+0.5);
    // 04670 LET Z1=INT(S1)
    QuadY = INT(EnterpriseSectorX);
    // 04680 LET Z2=INT(S2)
    QuadX = INT(EnterpriseSectorY);
    // 04690 GOSUB 10570
    InsertInQuadrant();
    // 04700 GOSUB 9140
    EmergencyShieldPower();
    // 04710 LET T8=1
    T8_flt = 1;
    // 04720 IF W1>=1 GOTO 4740
    if(WarpFactor>=1)goto Lbl_04740;
    // 04730 LET T8=.1*INT(10*W1)
    T8_flt = 0.1*INT(10*WarpFactor);

  Lbl_04740:
    // 04740 LET T=T+T8
    StarDate = StarDate+T8_flt;
    // 04750 IF T>T0+T9 GOTO 7440
    if(StarDate>StartStarDate+CampaignLength)goto Lbl_07440;
    // 04760 REM SEE IF DOCKED, THEN GET COMMAND
    // 04770 GOTO 3140
    goto Lbl_03140;
    // 04780 REM EXCEEDED QUADRANT LIMITS

  Lbl_04790:
    // 04790 LET X=8*Q1+X+N*X1
    X_int = 8*EnterpriseQuadrantX+X_int+WarpEnergy*X1_int;
    // 04800 LET Y=8*Q2+Y+N*X2
    Y_int = 8*EnterpriseQuadrantY+Y_int+WarpEnergy*X2_int;
    // 04810 LET Q1=INT(X/8)
    EnterpriseQuadrantX = INT(X_int/8);
    // 04820 LET Q2=INT(Y/8)
    EnterpriseQuadrantY = INT(Y_int/8);
    // 04830 LET S1=INT(X-Q1*8)
    EnterpriseSectorX = INT(X_int-EnterpriseQuadrantX*8);
    // 04840 LET S2=INT(Y-Q2*8)
    EnterpriseSectorY = INT(Y_int-EnterpriseQuadrantY*8);
    // 04850 LET X5=0
    X5_int = 0;
    // 04860 IF S1<>0 GOTO 4900
    if(EnterpriseSectorX!=0)goto Lbl_04900;
    // 04870 LET Q1=Q1-1
    EnterpriseQuadrantX = EnterpriseQuadrantX-1;
    // 04880 LET S1=8
    EnterpriseSectorX = 8;
    // 04890 LET X5=0
    X5_int = 0;

  Lbl_04900:
    // 04900 IF S2<>0 GOTO 4940
    if(EnterpriseSectorY!=0)goto Lbl_04940;
    // 04910 LET Q2=Q2-1
    EnterpriseQuadrantY = EnterpriseQuadrantY-1;
    // 04920 LET S2=8
    EnterpriseSectorY = 8;
    // 04930 LET X5=0
    X5_int = 0;

  Lbl_04940:
    // 04940 IF Q1>=1 GOTO 4980
    if(EnterpriseQuadrantX>=1)goto Lbl_04980;
    // 04950 LET X5=1
    X5_int = 1;
    // 04960 LET Q1=1
    EnterpriseQuadrantX = 1;
    // 04970 LET S1=1
    EnterpriseSectorX = 1;

  Lbl_04980:
    // 04980 IF Q1<=8 GOTO 5020
    if(EnterpriseQuadrantX<=8)goto Lbl_05020;
    // 04990 LET X5=1
    X5_int = 1;
    // 05000 LET Q1=8
    EnterpriseQuadrantX = 8;
    // 05010 LET S1=8
    EnterpriseSectorX = 8;

  Lbl_05020:
    // 05020 IF Q2>=1 GOTO 5060
    if(EnterpriseQuadrantY>=1)goto Lbl_05060;
    // 05030 LET X5=1
    X5_int = 1;
    // 05040 LET Q2=1
    EnterpriseQuadrantY = 1;
    // 05050 LET S2=1
    EnterpriseSectorY = 1;

  Lbl_05060:
    // 05060 IF Q2<=8 GOTO 5100
    if(EnterpriseQuadrantY<=8)goto Lbl_05100;
    // 05070 LET X5=1
    X5_int = 1;
    // 05080 LET Q2=8
    EnterpriseQuadrantY = 8;
    // 05090 LET S2=8
    EnterpriseSectorY = 8;

  Lbl_05100:
    // 05100 IF X5=0 GOTO 5170
    if(X5_int==0)goto Lbl_05170;
    // 05110 PRINT "LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"
    b2c_fprintf(stdout,"LT. UHURA REPORTS MESSAGE FROM STARFLEET COMMAND:"); b2c_fprintf(stdout,"\n");
    // 05120 PRINT "  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"
    b2c_fprintf(stdout,"  'PERMISSION TO ATTEMPT CROSSING OF GALACTIC PERIMETER"); b2c_fprintf(stdout,"\n");
    // 05130 PRINT "   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"
    b2c_fprintf(stdout,"   IS HEREBY *DENIED*.  SHUT DOWN YOUR ENGINES.'"); b2c_fprintf(stdout,"\n");
    // 05140 PRINT "CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"
    b2c_fprintf(stdout,"CHIEF ENGINEER SCOTT REPORTS 'WARP ENGINES SHUT DOWN"); b2c_fprintf(stdout,"\n");
    // 05150 PRINT "   AT SECTOR "S1","S2" OF QUADRANT "Q1","Q2".'"
    b2c_fprintf(stdout,"   AT SECTOR  %d , %d  OF QUADRANT  %d , %d .'",EnterpriseSectorX,EnterpriseSectorY,EnterpriseQuadrantX,EnterpriseQuadrantY); b2c_fprintf(stdout,"\n");
    // 05160 IF T>T0+T9 GOTO 7440
    if(StarDate>StartStarDate+CampaignLength)goto Lbl_07440;

  Lbl_05170:
    // 05170 IF 8*Q1+Q2=8*Q4+Q5 GOTO 4640
    if(8*EnterpriseQuadrantX+EnterpriseQuadrantY==8*Q4_int+Q5_int)goto Lbl_04640;
    // 05180 LET T=T+1
    StarDate = StarDate+1;
    // 05190 GOSUB 9140
    EmergencyShieldPower();
    // 05200 GOTO 2450
    goto EnterNewQuadrant;
    // 05210 REM
    // 05220 REM ===============================================================
    // 05230 REM
    // 05240 REM L.R. SENSOR SCAN CODE ***

  Lbl_05250:
    // 05250 IF D(3)>=0 GOTO 5280
    if(DamageControl[(int)3]>=0)goto Lbl_05280;
    // 05260 PRINT "LONG RANGE SENSORS ARE INOPERABLE"
    b2c_fprintf(stdout,"LONG RANGE SENSORS ARE INOPERABLE"); b2c_fprintf(stdout,"\n");
    // 05270 GOTO 3150
    goto Lbl_03150;

  Lbl_05280:
    // 05280 PRINT "LONG RANGE SENSOR SCAN FOR QUADRANT"Q1","Q2
    b2c_fprintf(stdout,"LONG RANGE SENSOR SCAN FOR QUADRANT %d , %d ",EnterpriseQuadrantX,EnterpriseQuadrantY); b2c_fprintf(stdout,"\n");
    // 05290 LET O1$="..................."
    GLBpStr="...................";
    O1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 05300 PRINT O1$
    b2c_fprintf(stdout,"%s",O1_str); b2c_fprintf(stdout,"\n");
    // 05310 FOR I=Q1-1 TO Q1+1
    for(idx_i=EnterpriseQuadrantX-1;idx_i<=EnterpriseQuadrantX+1;idx_i++){
        // 05320     REM    DIM N(3)
        // 05330     FOR I1=1 TO 3
        for(I1_int=1;I1_int<=3;I1_int++){
            // 05340 	LET N(I1)=0
            N_int_arr[(int)I1_int] = 0;
            // 05350     NEXT I1
            int dummy_5350=0; // Ignore this line.
        }; // End-For(I1_int)
        // 05360     FOR J=Q2-1 TO Q2+1
        for(idx_j=EnterpriseQuadrantY-1;idx_j<=EnterpriseQuadrantY+1;idx_j++){
            // 05370 	IF I<1 GOTO 5450
            if(idx_i<1)goto Lbl_05450;
            // 05380 	IF I>8 GOTO 5450
            if(idx_i>8)goto Lbl_05450;
            // 05390 	IF J<1 GOTO 5430
            if(idx_j<1)goto Lbl_05430;
            // 05400 	IF J>8 GOTO 5430
            if(idx_j>8)goto Lbl_05430;
            // 05410 	LET N(J-Q2+2)=G(I,J)
            N_int_arr[(int)idx_j-EnterpriseQuadrantY+2] = SectorPopulation[(int)idx_i][(int)idx_j];
            // 05420 	LET Z(I,J)=G(I,J)
            Z_int_arr[(int)idx_i][(int)idx_j] = SectorPopulation[(int)idx_i][(int)idx_j];

  Lbl_05430:
            // 05430     NEXTJ
            int dummy_5430=0; // Ignore this line.
        }; // End-For(idx_j)
        // 05440     REM   DIM P1$(20)

  Lbl_05450:
        // 05450     LET P1$=": ### : ### : ### :"
        GLBpStr=": ### : ### : ### :";
        P1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 05460     PRINT USING P1$,N(1),N(2),N(3)
        b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(P1_str),N_int_arr[(int)1],N_int_arr[(int)2],N_int_arr[(int)3]); b2c_fprintf(stdout,"\n");
        // 05470     PRINT O1$
        b2c_fprintf(stdout,"%s",O1_str); b2c_fprintf(stdout,"\n");
        // 05480 NEXT I
        int dummy_5480=0; // Ignore this line.
    }; // End-For(idx_i)
    // 05490 GOTO 3150
    goto Lbl_03150;
    // 05500 REM
    // 05510 REM ===============================================================
    // 05520 REM
    // 05530 REM *** PHASER CONTROL CODE BEGINS HERE

  Lbl_05540:
    // 05540 IF K3>0 GOTO 5580
    if(KlingonsSector>0)goto Lbl_05580;
    // 05550 PRINT "SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"
    b2c_fprintf(stdout,"SCIENCE OFFICER SPOCK REPORTS 'SENSOR SHOW"); b2c_fprintf(stdout,"\n");
    // 05560 PRINT "  NO ENEMY SHIPS IN THIS QUADRANT.'"
    b2c_fprintf(stdout,"  NO ENEMY SHIPS IN THIS QUADRANT.'"); b2c_fprintf(stdout,"\n");
    // 05570 GOTO 3150
    goto Lbl_03150;

  Lbl_05580:
    // 05580 IF D(4)>=0 GOTO 5610
    if(DamageControl[(int)4]>=0)goto Lbl_05610;
    // 05590 PRINT "PHASERS INOPERATIVE"
    b2c_fprintf(stdout,"PHASERS INOPERATIVE"); b2c_fprintf(stdout,"\n");
    // 05600 GOTO 3150
    goto Lbl_03150;

  Lbl_05610:
    // 05610 IF D(8)>=0 GOTO 5630
    if(DamageControl[(int)8]>=0)goto Lbl_05630;
    // 05620 PRINT "COMPUTER FAILURE HAMPERS ACCURACY"
    b2c_fprintf(stdout,"COMPUTER FAILURE HAMPERS ACCURACY"); b2c_fprintf(stdout,"\n");

  Lbl_05630:
    // 05630 PRINT "PHASERS LOCKED ON TARGET;  "
    b2c_fprintf(stdout,"PHASERS LOCKED ON TARGET;  "); b2c_fprintf(stdout,"\n");

  Lbl_05640:
    // 05640 PRINT "ENERGY AVAILABLE ="E
    b2c_fprintf(stdout,"ENERGY AVAILABLE = %d ",CurrentEnergy); b2c_fprintf(stdout,"\n");
    // 05650 PRINT "NUMBER OF UNITS TO FIRE:";
    b2c_fprintf(stdout,"NUMBER OF UNITS TO FIRE:"); 
    // 05660 INPUT X
    // Start of Basic INPUT statement 05660
    printf(" ? ");
    char inpbuf_05660[100];
    if(fgets(inpbuf_05660,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_05660=strtok(inpbuf_05660," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_05660==nullptr){
            X_int = 0;
        }else{
            X_int = atof(ps_05660);
        };
    }; // End of Basic INPUT statement 05660
    // 05670 IF X<=0 GOTO 3150
    if(X_int<=0)goto Lbl_03150;
    // 05680 IF E-X<0 GOTO 5640
    if(CurrentEnergy-X_int<0)goto Lbl_05640;
    // 05690 LET E=E-X
    CurrentEnergy = CurrentEnergy-X_int;
    // 05700 GOSUB 9270
    KlingonAttack();
    // 05710 IF D(7)>=0 GOTO 5730
    if(DamageControl[(int)7]>=0)goto Lbl_05730;
    // 05720 LET X=X*RND(1)
    X_int = X_int*RND(1);

  Lbl_05730:
    // 05730 LET H1=INT(X/K3)
    H1_int = INT(X_int/KlingonsSector);
    // 05740 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 05750     IF K(I,3)<=0 GOTO 5950
        if(KlingonInfoLocAndDamage[(int)idx_i][(int)3]<=0)goto Lbl_05950;
        // 05760     LET H=INT((H1/FND(0))*(RND(1)*2))
        KlingonHitDamage = INT((H1_int/FND(0))*(RND(1)*2));
        // 05770     IF H>.15*K(I,3) GOTO 5810
        if(KlingonHitDamage>0.15*KlingonInfoLocAndDamage[(int)idx_i][(int)3])goto Lbl_05810;
        // 05780     PRINT "SENSORS SHOW NO DAMAGE"
        b2c_fprintf(stdout,"SENSORS SHOW NO DAMAGE"); b2c_fprintf(stdout,"\n");
        // 05790     PRINT "    TO ENEMY AT "K(I,1)","K(I,2)
        b2c_fprintf(stdout,"    TO ENEMY AT  %d , %d ",KlingonInfoLocAndDamage[(int)idx_i][(int)1],KlingonInfoLocAndDamage[(int)idx_i][(int)2]); b2c_fprintf(stdout,"\n");
        // 05800     GOTO 5950
        goto Lbl_05950;

  Lbl_05810:
        // 05810     LET K(I,3)=K(I,3)-H
        KlingonInfoLocAndDamage[(int)idx_i][(int)3] = KlingonInfoLocAndDamage[(int)idx_i][(int)3]-KlingonHitDamage;
        // 05820     PRINT H" UNIT HIT ON KLINGON AT SECTOR "K(I,1)","K(I,2)
        b2c_fprintf(stdout," %d  UNIT HIT ON KLINGON AT SECTOR  %d , %d ",KlingonHitDamage,KlingonInfoLocAndDamage[(int)idx_i][(int)1],KlingonInfoLocAndDamage[(int)idx_i][(int)2]); b2c_fprintf(stdout,"\n");
        // 05830     IF K(I,3)<=0 GOTO 5860
        if(KlingonInfoLocAndDamage[(int)idx_i][(int)3]<=0)goto Lbl_05860;
        // 05840     PRINT "   (SENSORS SHOW"K(I,3)" UNITS REMAINING)"
        b2c_fprintf(stdout,"   (SENSORS SHOW %d  UNITS REMAINING)",KlingonInfoLocAndDamage[(int)idx_i][(int)3]); b2c_fprintf(stdout,"\n");
        // 05850     GOTO 5950
        goto Lbl_05950;

  Lbl_05860:
        // 05860     PRINT " *** KLINGON DESTROYED ***"
        b2c_fprintf(stdout," *** KLINGON DESTROYED ***"); b2c_fprintf(stdout,"\n");
        // 05870     LET K3=K3-1
        KlingonsSector = KlingonsSector-1;
        // 05880     LET K9=K9-1
        KlingonsTotal = KlingonsTotal-1;
        // 05890     A$="   "
        GLBpStr="   ";
        tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 05900     LET Z1=K(I,1)
        QuadY = KlingonInfoLocAndDamage[(int)idx_i][(int)1];
        // 05910     LET Z2=K(I,2)
        QuadX = KlingonInfoLocAndDamage[(int)idx_i][(int)2];
        // 05920     GOSUB 10570
        InsertInQuadrant();
        // 05930     LET G(Q1,Q2)=K3*100+B3*10+S3
        SectorPopulation[(int)EnterpriseQuadrantX][(int)EnterpriseQuadrantY] = KlingonsSector*100+StarbaseSector*10+SectorStars;
        // 05940     IF K9<=0 GOTO 7590
        if(KlingonsTotal<=0)goto Lbl_07590;

  Lbl_05950:
        // 05950 NEXT I
        int dummy_5950=0; // Ignore this line.
    }; // End-For(idx_i)
    // 05960 GOTO 3150
    goto Lbl_03150;
    // 05970 REM
    // 05980 REM ===============================================================
    // 05990 REM
    // 06000 REM PHOTON TORPEDO CODE BEGINS ***

  Lbl_06010:
    // 06010 IF D(5)>=0 GOTO 6040
    if(DamageControl[(int)5]>=0)goto Lbl_06040;
    // 06020 PRINT "PHOTON TUBES ARE NOT OPERATIONAL "
    b2c_fprintf(stdout,"PHOTON TUBES ARE NOT OPERATIONAL "); b2c_fprintf(stdout,"\n");
    // 06030 GOTO 3150
    goto Lbl_03150;

  Lbl_06040:
    // 06040 IF P>0 GOTO 6070
    if(PhotonTorpedoes>0)goto Lbl_06070;
    // 06050 PRINT "ALL PHOTON TORPEDOES EXPENDED"
    b2c_fprintf(stdout,"ALL PHOTON TORPEDOES EXPENDED"); b2c_fprintf(stdout,"\n");
    // 06060 GOTO 3150
    goto Lbl_03150;

  Lbl_06070:
    // 06070 PRINT "TORPEDO COURSE (1-9)";
    b2c_fprintf(stdout,"TORPEDO COURSE (1-9)"); 
    // 06080 INPUT C1
    // Start of Basic INPUT statement 06080
    printf(" ? ");
    char inpbuf_06080[100];
    if(fgets(inpbuf_06080,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06080=strtok(inpbuf_06080," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06080==nullptr){
            C1_int = 0;
        }else{
            C1_int = atof(ps_06080);
        };
    }; // End of Basic INPUT statement 06080
    // 06090 IF C1>=1 GOTO 6120
    if(C1_int>=1)goto Lbl_06120;

  Lbl_06100:
    // 06100 PRINT " ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"
    b2c_fprintf(stdout," ENSIGN CHEKOV REPORTS, 'INCORRECT COURSE DATA, SIR!'"); b2c_fprintf(stdout,"\n");
    // 06110 GOTO 3150
    goto Lbl_03150;

  Lbl_06120:
    // 06120 IF C1>9 GOTO 6100
    if(C1_int>9)goto Lbl_06100;
    // 06130 IF C1<9 GOTO 6160
    if(C1_int<9)goto Lbl_06160;
    // 06140 IF C1>=9 GOTO 6070
    if(C1_int>=9)goto Lbl_06070;
    // 06150 LET C1=1
    C1_int = 1;

  Lbl_06160:
    // 06160 LET X1=-SIN((C1-1)*P1)
    X1_int = -SIN((C1_int-1)*QuarterPi);
    // 06170 LET X2= COS((C1-1)*P1)
    X2_int = COS((C1_int-1)*QuarterPi);
    // 06180 IF ABS(X1)<ABS(X2) THEN 6230
    if(ABS(X1_int)<ABS(X2_int))goto Lbl_06230;
    // 06190 M9=ABS(1/X1)
    M9_int = ABS(1/X1_int);
    // 06200 X1=SGN(X1)
    X1_int = SGN(X1_int);
    // 06210 X2=X2*M9
    X2_int = X2_int*M9_int;
    // 06220 GOTO 6260
    goto Lbl_06260;

  Lbl_06230:
    // 06230 M9=ABS(1/X2)
    M9_int = ABS(1/X2_int);
    // 06240 X2=SGN(X2)
    X2_int = SGN(X2_int);
    // 06250 X1=X1*M9
    X1_int = X1_int*M9_int;

  Lbl_06260:
    // 06260 LET E=E-2
    CurrentEnergy = CurrentEnergy-2;
    // 06270 LET X=S1
    X_int = EnterpriseSectorX;
    // 06280 LET Y=S2
    Y_int = EnterpriseSectorY;
    // 06290 LET P=P-1
    PhotonTorpedoes = PhotonTorpedoes-1;
    // 06300 PRINT "TORPEDO TRACK:"
    b2c_fprintf(stdout,"TORPEDO TRACK:"); b2c_fprintf(stdout,"\n");

  Lbl_06310:
    // 06310 LET X=X+X1
    X_int = X_int+X1_int;
    // 06320 LET Y=Y+X2
    Y_int = Y_int+X2_int;
    // 06330 LET X9=INT(X+.5)
    X9_int = INT(X_int+0.5);
    // 06340 LET Y9=INT(Y+.5)
    Y9_int = INT(Y_int+0.5);
    // 06350 IF X9<1 GOTO 6880
    if(X9_int<1)goto Lbl_06880;
    // 06360 IF X9>=9 GOTO 6880
    if(X9_int>=9)goto Lbl_06880;
    // 06370 IF Y9<1 GOTO 6880
    if(Y9_int<1)goto Lbl_06880;
    // 06380 IF Y9>=9 GOTO 6880
    if(Y9_int>=9)goto Lbl_06880;
    // 06390 PRINT "               "X9","Y9
    b2c_fprintf(stdout,"                %d , %d ",X9_int,Y9_int); b2c_fprintf(stdout,"\n");
    // 06400 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06410 LET Z1=X9
    QuadY = X9_int;
    // 06420 LET Z2=Y9
    QuadX = Y9_int;
    // 06430 GOSUB 10880
    CheckQuadrantFor();
    // 06440 IF Z3<>0 GOTO 6310
    if(rtn!=0)goto Lbl_06310;
    // 06450 LET A$="+++"
    GLBpStr="+++";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06460 LET Z1=X9
    QuadY = X9_int;
    // 06470 LET Z2=Y9
    QuadX = Y9_int;
    // 06480 GOSUB 10880
    CheckQuadrantFor();
    // 06490 IF Z3=0 GOTO 6600
    if(rtn==0)goto Lbl_06600;
    // 06500 PRINT "*** KLINGON DESTROYED ***"
    b2c_fprintf(stdout,"*** KLINGON DESTROYED ***"); b2c_fprintf(stdout,"\n");
    // 06510 LET K3=K3-1
    KlingonsSector = KlingonsSector-1;
    // 06520 LET K9=K9-1
    KlingonsTotal = KlingonsTotal-1;
    // 06530 IF K9<=0 GOTO 7590
    if(KlingonsTotal<=0)goto Lbl_07590;
    // 06540 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 06550     IF X9<>K(I,1) GOTO 6570
        if(X9_int!=KlingonInfoLocAndDamage[(int)idx_i][(int)1])goto Lbl_06570;
        // 06560     IF Y9=K(I,2) GOTO 6580
        if(Y9_int==KlingonInfoLocAndDamage[(int)idx_i][(int)2])goto Lbl_06580;

  Lbl_06570:
        // 06570 NEXT I
        int dummy_6570=0; // Ignore this line.
    }; // End-For(idx_i)

  Lbl_06580:
    // 06580 LET K(I,3)=0
    KlingonInfoLocAndDamage[(int)idx_i][(int)3] = 0;
    // 06590 GOTO 6820
    goto Lbl_06820;

  Lbl_06600:
    // 06600 LET A$=" * "
    GLBpStr=" * ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06610 LET Z1=X9
    QuadY = X9_int;
    // 06620 LET Z2=Y9
    QuadX = Y9_int;
    // 06630 GOSUB 10880
    CheckQuadrantFor();
    // 06640 IF Z3=0 GOTO 6670
    if(rtn==0)goto Lbl_06670;
    // 06650 PRINT "STAR AT"X9;","Y9;" ABSORBED TORPEDO ENERGY."
    b2c_fprintf(stdout,"STAR AT %d , %d  ABSORBED TORPEDO ENERGY.",X9_int,Y9_int); b2c_fprintf(stdout,"\n");
    // 06660 GOTO 6890
    goto Lbl_06890;

  Lbl_06670:
    // 06670 LET A$=">!<"
    GLBpStr=">!<";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06680 LET Z1=X9
    QuadY = X9_int;
    // 06690 LET Z2=Y9
    QuadX = Y9_int;
    // 06700 GOSUB 10880
    CheckQuadrantFor();
    // 06710 IF Z3=0 GOTO 6070
    if(rtn==0)goto Lbl_06070;
    // 06720 PRINT "*** STARBASE DESTROYED ***"
    b2c_fprintf(stdout,"*** STARBASE DESTROYED ***"); b2c_fprintf(stdout,"\n");
    // 06730 LET B3=B3-1
    StarbaseSector = StarbaseSector-1;
    // 06740 LET B9=B9-1
    StarbaseTotal = StarbaseTotal-1;
    // 06750 IF B9>0 GOTO 6790
    if(StarbaseTotal>0)goto Lbl_06790;
    // 06760 PRINT "THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"
    b2c_fprintf(stdout,"THAT DOES IT, CAPTAIN!!  YOU ARE HEREBY RELIEVED OF COMMAND"); b2c_fprintf(stdout,"\n");
    // 06770 PRINT "   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"
    b2c_fprintf(stdout,"   AND SENTENCED TO 99 STARDATES AT HARD LABOUR IN CYGNUS 12!!"); b2c_fprintf(stdout,"\n");
    // 06780 GOTO 7490
    goto Lbl_07490;

  Lbl_06790:
    // 06790 PRINT "STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"
    b2c_fprintf(stdout,"STARFLEET COMMAND REVIEWING YOUR RECORD TO CONSIDER"); b2c_fprintf(stdout,"\n");
    // 06800 PRINT "   COURT MARTIAL!"
    b2c_fprintf(stdout,"   COURT MARTIAL!"); b2c_fprintf(stdout,"\n");
    // 06810 LET D0=0
    flgProtectedByStarbase = 0;

  Lbl_06820:
    // 06820 LET A$="   "
    GLBpStr="   ";
    tmpstr = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 06830 LET Z1=X9
    QuadY = X9_int;
    // 06840 LET Z2=Y9
    QuadX = Y9_int;
    // 06850 GOSUB 10570
    InsertInQuadrant();
    // 06860 LET G(Q1,Q2)=K3*100+B3*10+S3
    SectorPopulation[(int)EnterpriseQuadrantX][(int)EnterpriseQuadrantY] = KlingonsSector*100+StarbaseSector*10+SectorStars;
    // 06870 GOTO 6890
    goto Lbl_06890;

  Lbl_06880:
    // 06880 PRINT "TORPEDO MISSED"
    b2c_fprintf(stdout,"TORPEDO MISSED"); b2c_fprintf(stdout,"\n");

  Lbl_06890:
    // 06890 GOSUB 9270
    KlingonAttack();
    // 06900 GOTO 3150
    goto Lbl_03150;
    // 06910 REM
    // 06920 REM ===============================================================
    // 06930 REM
    // 06940 REM *** SHIELD CONTROL STARTS HERE

  Lbl_06950:
    // 06950 IF D(7)>=0 GOTO 6980
    if(DamageControl[(int)7]>=0)goto Lbl_06980;
    // 06960 PRINT "SHIELD CONTROL INOPERABLE"
    b2c_fprintf(stdout,"SHIELD CONTROL INOPERABLE"); b2c_fprintf(stdout,"\n");
    // 06970 GOTO 3150
    goto Lbl_03150;

  Lbl_06980:
    // 06980 PRINT "ENERGY AVAILABLE ="E+5". NUMBER OF UNITS TO SHIELDS:";
    b2c_fprintf(stdout,"ENERGY AVAILABLE =%d. NUMBER OF UNITS TO SHIELDS:",CurrentEnergy+5); 
    // 06990 INPUT X
    // Start of Basic INPUT statement 06990
    printf(" ? ");
    char inpbuf_06990[100];
    if(fgets(inpbuf_06990,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06990=strtok(inpbuf_06990," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06990==nullptr){
            X_int = 0;
        }else{
            X_int = atof(ps_06990);
        };
    }; // End of Basic INPUT statement 06990
    // 07000 IF X>=0 GOTO 7040
    if(X_int>=0)goto Lbl_07040;
    // 07010 IF S<>X GOTO 7040
    if(EnterpriseSheilds!=X_int)goto Lbl_07040;
    // 07020 PRINT "(SHIELDS UNCHANGED)"
    b2c_fprintf(stdout,"(SHIELDS UNCHANGED)"); b2c_fprintf(stdout,"\n");
    // 07030 GOTO 3150
    goto Lbl_03150;

  Lbl_07040:
    // 07040 IF E+S-X<0 GOTO 6980
    if(CurrentEnergy+EnterpriseSheilds-X_int<0)goto Lbl_06980;
    // 07050 LET E=E+S-X
    CurrentEnergy = CurrentEnergy+EnterpriseSheilds-X_int;
    // 07060 LET S=X
    EnterpriseSheilds = X_int;
    // 07070 PRINT "DEFLECTOR CONTROL ROOM REPORT:"
    b2c_fprintf(stdout,"DEFLECTOR CONTROL ROOM REPORT:"); b2c_fprintf(stdout,"\n");
    // 07080 PRINT "  'SHIELDS NOW AT "S" PER YOUR COMMAND'"
    b2c_fprintf(stdout,"  'SHIELDS NOW AT  %d  PER YOUR COMMAND'",EnterpriseSheilds); b2c_fprintf(stdout,"\n");
    // 07090 GOTO 3150
    goto Lbl_03150;
    // 07100 REM
    // 07110 REM ===============================================================
    // 07120 REM
    // 07130 REM *** DAMAGE CONTROL STARTS HERE

  Lbl_07140:
    // 07140 IF D(6)>=0 GOTO 7360
    if(DamageControl[(int)6]>=0)goto Lbl_07360;
    // 07150 PRINT "DAMAGE CONTROL REPORT NOT AVAILABLE"
    b2c_fprintf(stdout,"DAMAGE CONTROL REPORT NOT AVAILABLE"); b2c_fprintf(stdout,"\n");

  Lbl_07160:
    // 07160 IF D0=0 GOTO 3150
    if(flgProtectedByStarbase==0)goto Lbl_03150;
    // 07170 LET D3=0
    D3_flt = 0;
    // 07180 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 07190     IF D(I)>=0 GOTO 7210
        if(DamageControl[(int)idx_i]>=0)goto Lbl_07210;
        // 07200     LET D3=D3+.1
        D3_flt = D3_flt+0.1;

  Lbl_07210:
        // 07210 NEXT I
        int dummy_7210=0; // Ignore this line.
    }; // End-For(idx_i)
    // 07220 IF D3=0 GOTO 3150
    if(D3_flt==0)goto Lbl_03150;
    // 07230 LET D3=D3+D4
    D3_flt = D3_flt+D4_flt;
    // 07240 IF D3<1 GOTO 7260
    if(D3_flt<1)goto Lbl_07260;
    // 07250 LET D3=.9
    D3_flt = 0.9;

  Lbl_07260:
    // 07260 PRINT "TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"
    b2c_fprintf(stdout,"TECHNICIANS STANDING BY TO EFFECT REPAIRS TO YOUR SHIP:"); b2c_fprintf(stdout,"\n");
    // 07270 PRINT "ESTIMATED TIME TO REPAIR: ";
    b2c_fprintf(stdout,"ESTIMATED TIME TO REPAIR: "); 
    // 07280 PRINT USING ".# STARDATES",D3
    b2c_fprintf(stdout,".%1d stardates ",FT(D3_flt)); b2c_fprintf(stdout,"\n");
    // 07290 PRINT "WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)";
    b2c_fprintf(stdout,"WILL YOU AUTHORIZE THE REPAIR ORDER (YES/NO)"); 
    // 07300 INPUT A$
    // Start of Basic INPUT statement 07300
    printf(" ? ");
    char inpbuf_07300[100];
    if(fgets(inpbuf_07300,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07300=strtok(inpbuf_07300," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07300==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_07300;
        };
    }; // End of Basic INPUT statement 07300
    // 07310 IF A$<>"YES" GOTO 3150
    if(strcmp(tmpstr,"YES")!=0)goto Lbl_03150;
    // 07320 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 07330     LET D(I)=0
        DamageControl[(int)idx_i] = 0;
        // 07340 NEXT I
        int dummy_7340=0; // Ignore this line.
    }; // End-For(idx_i)
    // 07350 LET T=T+D3+.1
    StarDate = StarDate+D3_flt+0.1;

  Lbl_07360:
    // 07360 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07370 PRINT "DEVICE        STATE OF REPAIR"
    b2c_fprintf(stdout,"DEVICE        STATE OF REPAIR"); b2c_fprintf(stdout,"\n");
    // 07380 FOR R1=1 TO 8
    for(RandomNbr1=1;RandomNbr1<=8;RandomNbr1++){
        // 07390     GOSUB 10810
        DspDeviceName();
        // 07400     PRINT USING "  -##.##",D(R1)
        b2c_fprintf(stdout,"  %6.2f ",FT(DamageControl[(int)RandomNbr1])); b2c_fprintf(stdout,"\n");
        // 07410 NEXT R1
        int dummy_7410=0; // Ignore this line.
    }; // End-For(RandomNbr1)
    // 07420 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07430 GOTO 7160
    goto Lbl_07160;

  Lbl_07440:
    // 07440 PRINT "ITS IS STARDATE "T
    b2c_fprintf(stdout,"ITS IS STARDATE  %f ",StarDate); b2c_fprintf(stdout,"\n");
    // 07450 GOTO 7490
    goto Lbl_07490;

  Lbl_07460:
    // 07460 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07470 PRINT "THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."
    b2c_fprintf(stdout,"THE ENTERPRISE HAS BEEN DESTROYED.  THE FEDERATION WILL BE CONQUERED."); b2c_fprintf(stdout,"\n");
    // 07480 PRINT "IT IS STARDATE "T"."
    b2c_fprintf(stdout,"IT IS STARDATE  %f .",StarDate); b2c_fprintf(stdout,"\n");

  Lbl_07490:
    // 07490 PRINT "THERE WERE "K9" KLINGON BATTLE CRUISERS LEFT AT "
    b2c_fprintf(stdout,"THERE WERE  %d  KLINGON BATTLE CRUISERS LEFT AT ",KlingonsTotal); b2c_fprintf(stdout,"\n");
    // 07500 PRINT "THE END OF YOUR MISSION."
    b2c_fprintf(stdout,"THE END OF YOUR MISSION."); b2c_fprintf(stdout,"\n");

  Lbl_07510:
    // 07510 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07520 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07530 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
    b2c_fprintf(stdout,"THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"); b2c_fprintf(stdout,"\n");
    // 07540 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
    b2c_fprintf(stdout,"FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"); b2c_fprintf(stdout,"\n");
    // 07550 PRINT "LET HIM STEP FORWARD AND ENTER 'AYE'."
    b2c_fprintf(stdout,"LET HIM STEP FORWARD AND ENTER 'AYE'."); b2c_fprintf(stdout,"\n");
    // 07560 INPUT A$
    // Start of Basic INPUT statement 07560
    printf(" ? ");
    char inpbuf_07560[100];
    if(fgets(inpbuf_07560,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07560=strtok(inpbuf_07560," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07560==nullptr){
            tmpstr = "";
        }else{
            tmpstr = ps_07560;
        };
    }; // End of Basic INPUT statement 07560
    // 07570 IF A$="AYE" GOTO 1270
    if(strcmp(tmpstr,"AYE")==0)goto GameStart;
    // 07580 GOTO 9120
    goto Lbl_09120;

  Lbl_07590:
    // 07590 PRINT "CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"
    b2c_fprintf(stdout,"CONGRATULATIONS, CAPTAIN!  THE LAST KLINGON BATTLE CRUISER"); b2c_fprintf(stdout,"\n");
    // 07600 PRINT "  MENACING THE FEDERATION HAS BEEN DESTROYED."
    b2c_fprintf(stdout,"  MENACING THE FEDERATION HAS BEEN DESTROYED."); b2c_fprintf(stdout,"\n");
    // 07610 PRINT " "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 07620 PRINT "YOUR EFFICIENCY RATING IS "((K/(T-T0))*1000)"."
    b2c_fprintf(stdout,"YOUR EFFICIENCY RATING IS %f.",((K_int/(StarDate-StartStarDate))*1000)); b2c_fprintf(stdout,"\n");
    // 07630 GOTO 7510
    goto Lbl_07510;
    // 07640 REM
    // 07650 REM ===============================================================
    // 07660 REM
    // 07670 REM *** LIBARY COMPUTER CODE BEGINS HERE

  Lbl_07680:
    // 07680 IF D(8)>=0 GOTO 7710
    if(DamageControl[(int)8]>=0)goto Lbl_07710;
    // 07690 PRINT "COMPUTER DISABLED"
    b2c_fprintf(stdout,"COMPUTER DISABLED"); b2c_fprintf(stdout,"\n");
    // 07700 GOTO 3150
    goto Lbl_03150;

  Lbl_07710:
    // 07710 PRINT "COMPUTER ACTIVE AND AWAITING COMMAND:";
    b2c_fprintf(stdout,"COMPUTER ACTIVE AND AWAITING COMMAND:"); 
    // 07720 INPUT A
    // Start of Basic INPUT statement 07720
    printf(" ? ");
    char inpbuf_07720[100];
    if(fgets(inpbuf_07720,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07720=strtok(inpbuf_07720," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07720==nullptr){
            A_int = 0;
        }else{
            A_int = atof(ps_07720);
        };
    }; // End of Basic INPUT statement 07720
    // 07730 IF A<0 GOTO 3150
    if(A_int<0)goto Lbl_03150;
    // 07740 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 07750 LET H8=1
    H8_int = 1;
    // 07760 IF A=0 GOTO 8000
    if(A_int==0)goto Lbl_08000;
    // 07770 IF A>5 GOTO 7880
    if(A_int>5)goto Lbl_07880;
    // 07780 REM
    // 07790 REM ===============================================================
    // 07800 REM
    // 07810 ON A GOTO 8420, 8620, 9050, 8700, 7840
    switch((int)(A_int)){
        case 1: goto Lbl_08420;
        case 2: goto Lbl_08620;
        case 3: goto Lbl_09050;
        case 4: goto Lbl_08700;
        case 5: goto Lbl_07840;
        default: break; 
    };
    // 07820 REM  GOTO 9150
    // 07830 REM *** SETUP TO CHANGE C.G. RECORD TO GALAXY MAP

  Lbl_07840:
    // 07840 LET H8=0
    H8_int = 0;
    // 07850 LET G5=1
    G5_int = 1;
    // 07860 PRINT "                      THE GALAXY"
    b2c_fprintf(stdout,"                      THE GALAXY"); b2c_fprintf(stdout,"\n");
    // 07870 GOTO 8010
    goto Lbl_08010;

  Lbl_07880:
    // 07880 PRINT "FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"
    b2c_fprintf(stdout,"FUNCTIONS AVAILABLE FROM LIBARY-COMPUTER:"); b2c_fprintf(stdout,"\n");
    // 07890 PRINT "   0 = CUMULATIVE GALACTIC RECORD"
    b2c_fprintf(stdout,"   0 = CUMULATIVE GALACTIC RECORD"); b2c_fprintf(stdout,"\n");
    // 07900 PRINT "   1 = STATUS REPORT"
    b2c_fprintf(stdout,"   1 = STATUS REPORT"); b2c_fprintf(stdout,"\n");
    // 07910 PRINT "   2 = PHOTON TORPEDO DATA"
    b2c_fprintf(stdout,"   2 = PHOTON TORPEDO DATA"); b2c_fprintf(stdout,"\n");
    // 07920 PRINT "   3 = STARBASE NAVIGATION DATA"
    b2c_fprintf(stdout,"   3 = STARBASE NAVIGATION DATA"); b2c_fprintf(stdout,"\n");
    // 07930 PRINT "   4 = DIRECTION/DISTANCE CALCULATOR"
    b2c_fprintf(stdout,"   4 = DIRECTION/DISTANCE CALCULATOR"); b2c_fprintf(stdout,"\n");
    // 07940 PRINT "   5 = GALAXY 'REGION NAME' MAP"
    b2c_fprintf(stdout,"   5 = GALAXY 'REGION NAME' MAP"); b2c_fprintf(stdout,"\n");
    // 07950 GOTO 7710
    goto Lbl_07710;
    // 07960 REM
    // 07970 REM ===============================================================
    // 07980 REM
    // 07990 REM *** CUM GALACTIC RECORD CODE BEGINS ***

  Lbl_08000:
    // 08000 PRINT "COMPUTER RECORD OF GALAXY FOR QUADRANT "Q1","Q2":"
    b2c_fprintf(stdout,"COMPUTER RECORD OF GALAXY FOR QUADRANT  %d , %d :",EnterpriseQuadrantX,EnterpriseQuadrantY); b2c_fprintf(stdout,"\n");

  Lbl_08010:
    // 08010 PRINT "      1     2     3     4     5     6     7     8"
    b2c_fprintf(stdout,"      1     2     3     4     5     6     7     8"); b2c_fprintf(stdout,"\n");
    // 08020 LET O3$="    ----- ----- ----- ----- ----- ----- ----- -----"
    GLBpStr="    ----- ----- ----- ----- ----- ----- ----- -----";
    O3_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08030 PRINT O3$
    b2c_fprintf(stdout,"%s",O3_str); b2c_fprintf(stdout,"\n");
    // 08040 REM   DIM N1$(2),N2$(8),N$(5)
    // 08050 FOR I=1 TO 8
    for(idx_i=1;idx_i<=8;idx_i++){
        // 08060     LET N1$="##"
        GLBpStr="##";
        N1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 08070     PRINT USING N1$,I;
        b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(N1_str),idx_i); 
        // 08080     PRINT TAB(3);"|";
        b2c_fprintf(stdout,"%s|",TAB(3)); 
        // 08090     IF H8=0 GOTO 8210
        if(H8_int==0)goto Lbl_08210;
        // 08100     FOR J=1 TO 8
        for(idx_j=1;idx_j<=8;idx_j++){
            // 08110 	    LET N2$=" ### |"
            GLBpStr=" ### |";
            N2_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08120 	    LET N$=""
            GLBpStr="";
            N_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08130 	    IF I<>Q1 GOTO 8170
            if(idx_i!=EnterpriseQuadrantX)goto Lbl_08170;
            // 08140 	    IF J<>Q2 GOTO 8170
            if(idx_j!=EnterpriseQuadrantY)goto Lbl_08170;
            // 08150 	    LET N$=CHR$(7)
            GLBpStr=CHR(7);
            N_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
            // 08160 	    PRINT N$;
            b2c_fprintf(stdout,"%s",N_str); 

  Lbl_08170:
            // 08170 	    PRINT USING N2$,Z(I,J);
            b2c_fprintf(stdout,b2c_ConvertUsingFormatStr(N2_str),Z_int_arr[(int)idx_i][(int)idx_j]); 
            // 08180 	    PRINT N$;
            b2c_fprintf(stdout,"%s",N_str); 
            // 08190     NEXT J
            int dummy_8190=0; // Ignore this line.
        }; // End-For(idx_j)
        // 08200     GOTO 8340
        goto Lbl_08340;

  Lbl_08210:
        // 08210     LET Z4=I
        Z4_int = idx_i;
        // 08220     LET Z5=1
        Z5_int = 1;
        // 08230     GOSUB 10990
        GetQuadrantName();
        // 08240     LET J0=INT(15-.5*LEN(G2$))
        J0_int = INT(15-0.5*LEN(QuadName));
        // 08250     PRINT  TAB(J0);
        b2c_fprintf(stdout,"%s",TAB(J0_int)); 
        // 08260     PRINT G2$;
        b2c_fprintf(stdout,"%s",QuadName); 
        // 08270     PRINT TAB(27);"|";
        b2c_fprintf(stdout,"%s|",TAB(27)); 
        // 08280     LET Z5=5
        Z5_int = 5;
        // 08290     GOSUB 10990
        GetQuadrantName();
        // 08300     LET J0=INT(39-.5*LEN(G2$))
        J0_int = INT(39-0.5*LEN(QuadName));
        // 08310     PRINT  TAB(J0);
        b2c_fprintf(stdout,"%s",TAB(J0_int)); 
        // 08320     PRINT G2$;
        b2c_fprintf(stdout,"%s",QuadName); 
        // 08330     PRINT TAB(51);"|";
        b2c_fprintf(stdout,"%s|",TAB(51)); 

  Lbl_08340:
        // 08340     PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 08350     PRINT O3$
        b2c_fprintf(stdout,"%s",O3_str); b2c_fprintf(stdout,"\n");
        // 08360 NEXT I
        int dummy_8360=0; // Ignore this line.
    }; // End-For(idx_i)
    // 08370 GOTO 3150
    goto Lbl_03150;
    // 08380 REM
    // 08390 REM ===============================================================
    // 08400 REM
    // 08410 REM *** STATUS REPORT CODE BEGINS HERE ***

  Lbl_08420:
    // 08420 PRINT "   STATUS REPORT:"
    b2c_fprintf(stdout,"   STATUS REPORT:"); b2c_fprintf(stdout,"\n");
    // 08430 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08440 IF K9=1 GOTO 8460
    if(KlingonsTotal==1)goto Lbl_08460;
    // 08450 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_08460:
    // 08460 PRINT K9" KLINGON"X$" LEFT"
    b2c_fprintf(stdout," %d  KLINGON%s LEFT",KlingonsTotal,X_str); b2c_fprintf(stdout,"\n");
    // 08470 LET V5=(T0+T9)-T
    V5_int = (StartStarDate+CampaignLength)-StarDate;
    // 08480 PRINT USING "MISSION MUST BE COMPLETED IN ##.# STARDATES",V5
    b2c_fprintf(stdout,"mission must be completed in %4.1f stardates ",FT(V5_int)); b2c_fprintf(stdout,"\n");
    // 08490 LET X$=""
    GLBpStr="";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08500 IF B9=1 GOTO 8560
    if(StarbaseTotal==1)goto Lbl_08560;
    // 08510 LET X$="S"
    GLBpStr="S";
    X_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 08520 IF B9<>0 GOTO 8560
    if(StarbaseTotal!=0)goto Lbl_08560;
    // 08530 PRINT "YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"
    b2c_fprintf(stdout,"YOUR STUPIDITY HAS LEFT YOU ON YOUR OWN IN"); b2c_fprintf(stdout,"\n");
    // 08540 PRINT "  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"
    b2c_fprintf(stdout,"  THE GALAXY -- YOU HAVE NO STARBASES LEFT!"); b2c_fprintf(stdout,"\n");
    // 08550 GOTO 7140
    goto Lbl_07140;

  Lbl_08560:
    // 08560 PRINT "THE FEDERATION IS MAINTAINING"B9" STARBASE"X$" IN THE GALAXY"
    b2c_fprintf(stdout,"THE FEDERATION IS MAINTAINING %d  STARBASE%s IN THE GALAXY",StarbaseTotal,X_str); b2c_fprintf(stdout,"\n");
    // 08570 GOTO 7140
    goto Lbl_07140;
    // 08580 REM
    // 08590 REM ===============================================================
    // 08600 REM
    // 08610 REM CODE FOR TORPEDO DATA, BASE NAV, D/D CALCULATOR ***

  Lbl_08620:
    // 08620 LET H8=0
    H8_int = 0;
    // 08630 FOR I=1 TO 3
    for(idx_i=1;idx_i<=3;idx_i++){
        // 08640     IF K(I,3)<=0 GOTO 9030
        if(KlingonInfoLocAndDamage[(int)idx_i][(int)3]<=0)goto Lbl_09030;
        // 08650     LET W1=K(I,1)
        WarpFactor = KlingonInfoLocAndDamage[(int)idx_i][(int)1];
        // 08660     LET X=K(I,2)
        X_int = KlingonInfoLocAndDamage[(int)idx_i][(int)2];

  Lbl_08670:
        // 08670     LET C1=S1
        C1_int = EnterpriseSectorX;
        // 08680     LET A=S2
        A_int = EnterpriseSectorY;
        // 08690     GOTO8770
        goto Lbl_08770;

  Lbl_08700:
        // 08700     PRINT "DIRECTION/DISTANCE CALCULATOR:"
        b2c_fprintf(stdout,"DIRECTION/DISTANCE CALCULATOR:"); b2c_fprintf(stdout,"\n");
        // 08710     PRINT "YOU ARE AT QUADRANT ("Q1","Q2") SECTOR ("S1","S2")"
        b2c_fprintf(stdout,"YOU ARE AT QUADRANT ( %d , %d ) SECTOR ( %d , %d )",EnterpriseQuadrantX,EnterpriseQuadrantY,EnterpriseSectorX,EnterpriseSectorY); b2c_fprintf(stdout,"\n");
        // 08720     PRINT "PLEASE ENTER --"
        b2c_fprintf(stdout,"PLEASE ENTER --"); b2c_fprintf(stdout,"\n");
        // 08730     PRINT "  INITIAL COORDINATES (X,Y)";
        b2c_fprintf(stdout,"  INITIAL COORDINATES (X,Y)"); 
        // 08740     INPUT C1,A
        // Start of Basic INPUT statement 08740
        printf(" ? ");
        char inpbuf_08740[100];
        if(fgets(inpbuf_08740,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_08740=strtok(inpbuf_08740," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_08740==nullptr){
                C1_int = 0;
            }else{
                C1_int = atof(ps_08740);
            };
            ps_08740=strtok(nullptr," ,\t\n");
            if(ps_08740==nullptr){
                A_int = 0;
            }else{
                A_int = atof(ps_08740);
            };
        }; // End of Basic INPUT statement 08740
        // 08750     PRINT "  FINAL COORDINATES (X,Y)";
        b2c_fprintf(stdout,"  FINAL COORDINATES (X,Y)"); 
        // 08760     INPUT W1,X
        // Start of Basic INPUT statement 08760
        printf(" ? ");
        char inpbuf_08760[100];
        if(fgets(inpbuf_08760,100,stdin)==nullptr){
            fprintf(stderr,"ERROR: End of file on input.\n");
            exit(2);
        }else{
            char *ps_08760=strtok(inpbuf_08760," ,\t\n");
            // This may cause problems if BASIC programmer expected
            // input strings to be copied instead of just pointing
            // to the input buffer (ie. strings can be over written).
            if(ps_08760==nullptr){
                WarpFactor = 0;
            }else{
                WarpFactor = atof(ps_08760);
            };
            ps_08760=strtok(nullptr," ,\t\n");
            if(ps_08760==nullptr){
                X_int = 0;
            }else{
                X_int = atof(ps_08760);
            };
        }; // End of Basic INPUT statement 08760

  Lbl_08770:
        // 08770     LET X=X-A
        X_int = X_int-A_int;
        // 08780     LET A=C1-W1
        A_int = C1_int-WarpFactor;
        // 08790     IF X<0 GOTO 8900
        if(X_int<0)goto Lbl_08900;
        // 08800     IF A<0 GOTO 8960
        if(A_int<0)goto Lbl_08960;
        // 08810     IF X>0 GOTO 8830
        if(X_int>0)goto Lbl_08830;
        // 08820     IF A=0 GOTO 8920
        if(A_int==0)goto Lbl_08920;

  Lbl_08830:
        // 08830     LET C1=1
        C1_int = 1;

  Lbl_08840:
        // 08840     IF ABS(A)<=ABS(X) GOTO 8880
        if(ABS(A_int)<=ABS(X_int))goto Lbl_08880;
        // 08850     LET V5=C1+(((ABS(A)-ABS(X))+ABS(A))/ABS(A))
        V5_int = C1_int+(((ABS(A_int)-ABS(X_int))+ABS(A_int))/ABS(A_int));
        // 08860     PRINT "DIRECTION ="V5
        b2c_fprintf(stdout,"DIRECTION = %d ",V5_int); b2c_fprintf(stdout,"\n");
        // 08870     GOTO 9010
        goto Lbl_09010;

  Lbl_08880:
        // 08880     PRINT "DIRECTION ="C1+(ABS(A)/ABS(X))
        b2c_fprintf(stdout,"DIRECTION =%d",C1_int+(ABS(A_int)/ABS(X_int))); b2c_fprintf(stdout,"\n");
        // 08890     GOTO 9010
        goto Lbl_09010;

  Lbl_08900:
        // 08900     IF A>0 GOTO 8940
        if(A_int>0)goto Lbl_08940;
        // 08910     IF X=0 GOTO 8960
        if(X_int==0)goto Lbl_08960;

  Lbl_08920:
        // 08920     LET C1=5
        C1_int = 5;
        // 08930     GOTO 8840
        goto Lbl_08840;

  Lbl_08940:
        // 08940     LET C1=3
        C1_int = 3;
        // 08950     GOTO 8970
        goto Lbl_08970;

  Lbl_08960:
        // 08960     LET C1=7
        C1_int = 7;

  Lbl_08970:
        // 08970     IF ABS(A)>=ABS(X) GOTO 9000
        if(ABS(A_int)>=ABS(X_int))goto Lbl_09000;
        // 08980     PRINT "DIRECTION ="C1+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
        b2c_fprintf(stdout,"DIRECTION =%d",C1_int+(((ABS(X_int)-ABS(A_int))+ABS(X_int))/ABS(X_int))); b2c_fprintf(stdout,"\n");
        // 08990     GOTO 9010
        goto Lbl_09010;

  Lbl_09000:
        // 09000     PRINT "DIRECTION ="C1+(ABS(X)/ABS(A))
        b2c_fprintf(stdout,"DIRECTION =%d",C1_int+(ABS(X_int)/ABS(A_int))); b2c_fprintf(stdout,"\n");

  Lbl_09010:
        // 09010     PRINT "DISTANCE ="SQR(X^2+A^2)
        b2c_fprintf(stdout,"DISTANCE = %d ",SQR(IPower(X_int,2)+IPower(A_int,2))); b2c_fprintf(stdout,"\n");
        // 09020     IF H8=1 GOTO 3150
        if(H8_int==1)goto Lbl_03150;

  Lbl_09030:
        // 09030 NEXT I
        int dummy_9030=0; // Ignore this line.
    }; // End-For(idx_i)
    // 09040 GOTO 3150
    goto Lbl_03150;

  Lbl_09050:
    // 09050 IF B3<>0 GOTO 9080
    if(StarbaseSector!=0)goto Lbl_09080;
    // 09060 PRINT "MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"
    b2c_fprintf(stdout,"MR. SPOCK REPORTS, 'SENSORS SHOW NO STARBASES IN THIS QUADRANT.'"); b2c_fprintf(stdout,"\n");
    // 09070 GOTO 3150
    goto Lbl_03150;

  Lbl_09080:
    // 09080 PRINT "FROM ENTERPRISE TO STARBASE:"
    b2c_fprintf(stdout,"FROM ENTERPRISE TO STARBASE:"); b2c_fprintf(stdout,"\n");
    // 09090 LET W1=B4
    WarpFactor = B4_int;
    // 09100 LET X=B5
    X_int = B5_int;
    // 09110 GOTO 8670
    goto Lbl_08670;

  Lbl_09120:
    // 09120 STOP
    exit(1);
    // 09130 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
