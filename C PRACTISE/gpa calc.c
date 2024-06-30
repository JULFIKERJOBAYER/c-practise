#include<stdio.h>
#include<math.h>
int main(){
    float b,e,gm,i,p,c,m,bi,bgs, rel, total,gpa;
    int mark[15], sn,z,x,n, classs, group, B1, B2, E1, E2, I, P1, P2, C1, C2, M1, M2, BI1, BI2, BGS, REL;
    char sub[20];

printf("GPA CALCULATOR\n\n");
oni:                                                            //choice of exam code
printf("EXAM NAME:\n1. SSC\n2. HSC\nchoose one: ");
scanf("%d", &classs);

    if (classs == 1)               //ssc
    {
    printf("GROUP:\n1. SCIENCE\n2. BUSINESS STUDIES\n3. HUMANITIES\nchoose one: ");
        scanf("%d", &group);                    //choice of ssc group code start here

        if(group == 1) //ssc science
            {
            printf("your optional subject:\n1. HIGHER MATH\n2. BIOLOGY\nchoose one: ");
            scanf("%d", &x);

            printf("ENTER THE NUMBES:\n");

            printf("BANGLA 1ST PAPER: ");
            scanf("%d",&B1);
            printf("BANGLA 2ND PAPER: ");
            scanf("%d",&B2);
            printf("ENGLISH 1ST PAPER: ");
            scanf("%d",&E1);
            printf("ENGLISH 2ND PAPER: ");
            scanf("%d",&E2);
            printf("GENERAL MATH: ");
            scanf("%d",&M1);
            printf("ICT: ");
            scanf("%d",&I);
            printf("BGS: ");
            scanf("%d",&BGS);
            printf("RELIGION EDU.: ");
            scanf("%d",&REL);
            printf("PYSICS: ");
            scanf("%d",&P1);
            printf("CHEMISTRY: ");
            scanf("%d",&C1);
            printf("HIGHER MATH: ");
            scanf("%d",&M2);
            printf("BIOLOGY: ");
            scanf("%d",&BI1);

//gpa counting code for each subject

if(B1+B2>=66)     //ssc bangla
    {   if(B1+B2>=160 && B1+B2<=200){b=5;}
        if(B1+B2>=140 && B1+B2<=159){b=4;}
        if(B1+B2>=120 && B1+B2<=139){b=3.5;}
        if(B1+B2>=100 && B1+B2<=119){b=3;}
        if(B1+B2>=80 && B1+B2<=99){b=2;}
        if(B1+B2>=66 && B1+B2<=79){b=1;}
    }
else {b=0;}

    if(E1+E2>=66)       //ssc english
            {
            if(E1+E2>=160 && E1+E2<=200){e=5;}
            if(E1+E2>=140 && E1+E2<=159){e=4;}
            if(E1+E2>=120 && E1+E2<=139){e=3.5;}
            if(E1+E2>=100 && E1+E2<=119){e=3;}
            if(E1+E2>=80 && E1+E2<=99){e=2;}
            if(E1+E2>=66 && E1+E2<=79){e=1;}
            }
    else {e=0;}

    //ssc general math

            if(M1>=33)
            {
            if(M1>=80 && M1<=100){gm=5;}
            if(M1>=70 && M1<=79){gm=4;}
            if(M1>=60 && M1<=69){gm=3.5;}
            if(M1>=50 && M1<=59){gm=3;}
            if(M1>=40 && M1<=49){gm=2;}
            if(M1>=33 && M1<=39){gm=1;}
            }
            else{gm=0;}
//ssc ict
        if(I>=33)
                {
                if(I>=80 &&I<=100){i=5;}
                if(I>=70 && I<=79){i=4;}
                if(I>=60 && I<=69){i=3.5;}
                if(I>=50 && I<=59){i=3;}
                if(I>=40 && I<=49){i=2;}
                if(I>=33 && I<=39){i=1;}
                }
        else{i=0;}

//ssc BGS
        if(BGS>=33)
                {
                if(BGS>=80 && BGS<=100){bgs=5;}
                if(BGS>=70 && BGS<=79){bgs=4;}
                if(BGS>=60 && BGS<=69){bgs=3.5;}
                if(BGS>=50 && BGS<=59){bgs=3;}
                if(BGS>=40 && BGS<=49){bgs=2;}
                if(BGS>=33 && BGS<=39){bgs=1;}
                }
        else{bgs=0;}

//ssc RELIGION
        if(REL>=33)
                {
                if(REL>=80 && REL<=100){rel=5;}
                if(REL>=70 && REL<=79){rel=4;}
                if(REL>=60 && REL<=69){rel=3.5;}
                if(REL>=50 && REL<=59){rel=3;}
                if(REL>=40 && REL<=49){rel=2;}
                if(REL>=33 && REL<=39){rel=1;}
                }
        else{rel=0;}
//ssc physics:

            if(P1>=33)
                    {
                    if(P1>=80 && P1<=100){p=5;}
                    if(P1>=70 && P1<=79){p=4;}
                    if(P1>=60 && P1<=69){p=3.5;}
                    if(P1>=50 && P1<=59){p=3;}
                    if(P1>=40 && P1<=49){p=2;}
                    if(P1>=33 && P1<=39){p=1;}
                    }
            else{p=0;}

//ssc chemistry

                if(C1>=33)
                        {
                        if(C1>=80 && C1<=100){c=5;}
                        if(C1>=70 && C1<=79){c=4;}
                        if(C1>=60 && C1<=69){c=3.5;}
                        if(C1>=50 && C1<=59){c=3;}
                        if(C1>=40 && C1<=49){c=2;}
                        if(C1>=33 && C1<=39){c=1;}
                        }
                else{c=0;}

//optional subject dividing higher math(1) or biology(2)

if(x>0){
        if(x == 1)
            {
            if(BI1>=80 && BI1<=100){bi=5;}
            if(BI1>=70 && BI1<=79){bi=4;}
            if(BI1>=60 && BI1<=69){bi=3.5;}
            if(BI1>=50 && BI1<=59){bi=3;}
            if(BI1>=40 && BI1<=49){bi=2;}
            if(BI1>=33 && BI1<=39){bi=1;}
            if(BI1>=00 && BI1<=32){bi=0;}

            if(M2>=80 && M2<=100){m=3;}
            if(M2>=70 && M2<=79){m=2;}
            if(M2>=60 && M2<=69){m=1.5;}
            if(M2>=50 && M2<=59){m=1;}
            if(M2>=40 && M2<=49){m=0;}
            if(M2>=33 && M2<=39){m=0;}
            if(M2>=00 && M2<=32){m=0;}
            }
        else if(x == 2)
            {
            if(M2>=80 && M2<=100){m=5;}
            if(M2>=70 && M2<=79){m=4;}
            if(M2>=60 && M2<=69){m=3.5;}
            if(M2>=50 && M2<59){m=3;}
            if(M2>=40 && M2<=49){m=2;}
            if(M2>=33 && M2<=39){m=1;}
            if(M2>=00 && M2<=32){m=0;}

            if(BI1>=80 && BI1<=100){bi=3;}
            if(BI1>=70 && BI1<=79){bi=2;}
            if(BI1>=60 && BI1<=69){bi=1.5;}
            if(BI1>=50 && BI1<=59){bi=1;}
            if(BI1>=40 && BI1<=49){bi=0;}
            if(BI1>=33 && BI1<=39){bi=0;}
            if(BI1>=00 && BI1<=32){bi=0;}
            }
        }

    else{
        bi=0;
        m=0;
        }

                                    //end of gpa calculating for each sunject

//starting finalization

total = b+e+gm+i+bgs+rel+p+c+m+bi;
gpa = total/9;

//ultapalta gpa maintain:

                            if(gpa>=5.00)
                                {
                                gpa=5.00;
                                }
                            if(gpa<1.00)
                                {
                                gpa=0.00;
                                }
                            if(b==0.00 || e==0.00 || gm==0.00 || i==0.00 || rel==0.00 || i==0.00 || p==0.00 || c==0.00)
                                {
                                gpa=0.00;
                                }
                            if(x==1 && bi==0.00)
                                {
                                gpa=0.00;
                                }
                            if(x==2 && m==0.00)
                                {
                                gpa=0.00;
                                }


//resultsheet printing

printf("\nSUBJECT    NUMBER     GPA\n\n");
printf("BANGLA         %d       %.2f\n\n", B1+B2, b);
printf("ENGLISH        %d       %.2f\n\n", E1+E2, e);
printf("GENERAL MATH    %d       %.2f\n\n", M1, gm);
printf("ICT            %d       %.2f\n\n", I, i);
printf("BGS             %d       %.2f\n\n", BGS, bgs);
printf("RELIGION EDU.   %d       %.2f\n\n", REL, rel);
printf("PHYSICS        %d       %.2f\n\n", P1, p);
printf("CHEMISTRY      %d       %.2f\n\n", C1, c);
printf("MATH           %d       %.2f\n\n", M2, m);
printf("BIOLOGY        %d       %.2f\n\n", BI1, bi);

printf("TOTAL NUMBER:\t %d OUT OF 1200\n\n",B1+B2+E1+E2+M1+BGS+REL+I+P1+C1+M2+BI1);
printf("THE GPA IS %.2f OUT OF 5.00\n\n", gpa);
        }
       //end of ssc science gpa calculating
       else {
            printf("ENTER YOUR SUBJECT NUMBER.\n");
            scanf("%s", &n);
            for(i=1; i<=n; i++)
            {  printf("ENTER YOUR SUBJECT NAME: ");
               scanf("%c", &sub[i]);
               printf("ENTER YOUR SUBJECT NUMBER: ");
               scanf("%d", &mark[i]);
            }



            }
       //end of ssc gpa calculating
    }

    else if(classs == 2)
        {
        printf("GROUP:\n1. SCIENCE\n2. BUSINESS STUDIES\n3. HUMANITIES\nchoose one: ");
        scanf("%d", &group);                    //choice of hsc group code start here

        if(group == 1)
            {
            printf("your optional subject:\n1. MATH\n2. BIOLOGY\nchoose one: ");
            scanf("%d", &x);

            printf("ENTER THE NUMBES:\n");

            printf("BANGLA 1ST PAPER: ");
            scanf("%d",&B1);
            printf("BANGLA 2ND PAPER: ");
            scanf("%d",&B2);
            printf("ENGLISH 1ST PAPER: ");
            scanf("%d",&E1);
            printf("ENGLISH 2ND PAPER: ");
            scanf("%d",&E2);
            printf("ICT: ");
            scanf("%d",&I);
            printf("PYSICS 1ST PAPER: ");
            scanf("%d",&P1);
            printf("PHYSICS 2ND PAPER: ");
            scanf("%d",&P2);
            printf("CHEMISTRY 1ST PAPER: ");
            scanf("%d",&C1);
            printf("CHEMISTRY 2ND PAPER: ");
            scanf("%d",&C2);
            printf("MATH 1ST PAPER: ");
            scanf("%d",&M1);
            printf("MATH 2ND PAPER: ");
            scanf("%d",&M2);
            printf("BIOLOGY 1ST PAPER: ");
            scanf("%d",&BI1);
            printf("BIOLOGY 2ND PAPER: ");
            scanf("%d",&BI2);

//gpa counting code for each subject

if(B1+B2>=66)     //bangla
    {   if(B1+B2>=160 && B1+B2<=200){b=5;}
        if(B1+B2>=140 && B1+B2<=159){b=4;}
        if(B1+B2>=120 && B1+B2<=139){b=3.5;}
        if(B1+B2>=100 && B1+B2<=119){b=3;}
        if(B1+B2>=80 && B1+B2<=99){b=2;}
        if(B1+B2>=66 && B1+B2<=79){b=1;}
    }
else {b=0;}

    if(E1+E2>=66)       //hsc english
            {
            if(E1+E2>=160 && E1+E2<=200){e=5;}
            if(E1+E2>=140 && E1+E2<=159){e=4;}
            if(E1+E2>=120 && E1+E2<=139){e=3.5;}
            if(E1+E2>=100 && E1+E2<=119){e=3;}
            if(E1+E2>=80 && E1+E2<=99){e=2;}
            if(E1+E2>=66 && E1+E2<=79){e=1;}
            }
    else {e=0;}

//hsc ict
        if(I>=33)
                {
                if(I>=80 &&I<=100){i=5;}
                if(I>=70 && I<=79){i=4;}
                if(I>=60 && I<=69){i=3.5;}
                if(I>=50 && I<=59){i=3;}
                if(I>=40 && I<=49){i=2;}
                if(I>=33 && I<=39){i=1;}
                }
        else{i=0;}

//hsc physics:

            if(P1+P2>=66)
                    {
                    if(P1+P2>=160 && P1+P2<=200){p=5;}
                    if(P1+P2>=140 && P1+P2<=159){p=4;}
                    if(P1+P2>=120 && P1+P2<=139){p=3.5;}
                    if(P1+P2>=100 && P1+P2<=119){p=3;}
                    if(P1+P2>=80 && P1+P2<=99){p=2;}
                    if(P1+P2>=66 && P1+P2<=79){p=1;}
                    }
            else{p=0;}

//hsc chemistry

                if(C1+C2>=66)
                        {
                        if(C1+C2>=160 && C1+C2<=200){c=5;}
                        if(C1+C2>=140 && C1+C2<=159){c=4;}
                        if(C1+C2>=120 && C1+C2<=139){c=3.5;}
                        if(C1+C2>=100 && C1+C2<=119){c=3;}
                        if(C1+C2>=80 && C1+C2<=99){c=2;}
                        if(C1+C2>=66 && C1+C2<=79){c=1;}
                        }
                else{c=0;}

//optional subject dividing math(1) or biology(2)

if(x>0){
        if(x == 1)
            {
            if(BI1+BI2>=160 && BI1+BI2<=200){bi=5;}
            if(BI1+BI2>=140 && BI1+BI2<=159){bi=4;}
            if(BI1+BI2>=120 && BI1+BI2<=139){bi=3.5;}
            if(BI1+BI2>=100 && BI1+BI2<=119){bi=3;}
            if(BI1+BI2>=80 && BI1+BI2<=99){bi=2;}
            if(BI1+BI2>=66 && BI1+BI2<=79){bi=1;}
            if(BI1+BI2>=00 && BI1+BI2<=65){bi=0;}

            if(M1+M2>=160 && M1+M2<=200){m=3;}
            if(M1+M2>=140 && M1+M2<=159){m=2;}
            if(M1+M2>=120 && M1+M2<=139){m=1.5;}
            if(M1+M2>=100 && M1+M2<=119){m=1;}
            if(M1+M2>=80 && M1+M2<=99){m=0;}
            if(M1+M2>=66 && M1+M2<=79){m=0;}
            if(M1+M2>=00 && M1+M2<=65){m=0;}
            }
        else if(x == 2)
            {
            if(M1+M2>=160 && M1+M2<=200){m=5;}
            if(M1+M2>=140 && M1+M2<=159){m=4;}
            if(M1+M2>=120 && M1+M2<=139){m=3.5;}
            if(M1+M2>=100 && M1+M2<=119){m=3;}
            if(M1+M2>=80 && M1+M2<=99){m=2;}
            if(M1+M2>=66 && M1+M2<=79){m=1;}
            if(M1+M2>=00 && M1+M2<=65){m=0;}

            if(BI1+BI2>=160 && BI1+BI2<=200){bi=3;}
            if(BI1+BI2>=140 && BI1+BI2<=159){bi=2;}
            if(BI1+BI2>=120 && BI1+BI2<=139){bi=1.5;}
            if(BI1+BI2>=100 && BI1+BI2<=119){bi=1;}
            if(BI1+BI2>=80 && BI1+BI2<=99){bi=0;}
            if(BI1+BI2>=66 && BI1+BI2<=79){bi=0;}
            if(BI1+BI2>=00 && BI1+BI2<=65){bi=0;}
            }
        }

    else{
        bi=0;
        m=0;
        }

                                                //end of gpa calculating for each sunject

//starting finalization

total = b+e+i+p+c+m+bi;
gpa = total/6;

//ultapalta gpa maintain:

                            if(gpa>=5.00)
                                {
                                gpa=5.00;
                                }
                            if(gpa<1.00)
                                {
                                gpa=0.00;
                                }
                            if(b==0.00 || e==0.00 || i==0.00 || p==0.00 || c==0.00)
                                {
                                gpa=0.00;
                                }
                            if(x==1 && bi==0.00)
                                {
                                gpa=0.00;
                                }
                            if(x==2 && m==0.00)
                                {
                                gpa=0.00;
                                }


//resultsheet printing

printf("\nSUBJECT    NUMBER     GPA\n\n");
printf("BANGLA         %d       %.2f\n\n", B1+B2, b);
printf("ENGLISH        %d       %.2f\n\n", E1+E2, e);
printf("ICT            %d       %.2f\n\n", I, i);
printf("PHYSICS        %d       %.2f\n\n", P1+P2, p);
printf("CHEMISTRY      %d       %.2f\n\n", C1+C2, c);
printf("MATH           %d       %.2f\n\n", M1+M2, m);
printf("BIOLOGY        %d       %.2f\n\n", BI1+BI2, bi);

printf("TOTAL NUMBER:\t %d OUT OF 1300\n\n",B1+B2+E1+E2+I+P1+P2+C1+C2+M1+M2+BI1+BI2 );
printf("THE GPA IS %.2f OUT OF 5.00\n\n", gpa);

//end of hsc science gpa calculating
        }


else
    {
    printf("still working in this site\n");
    goto oni;
    }
     //end of hsc group
        }
    else{
        printf("INVALID CHOICE.....TRY AGAIN.\n");
        goto oni;
        }

return 0;
}

