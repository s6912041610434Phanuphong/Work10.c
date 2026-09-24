#include<stdio.h>
#include<string.h>

int main(){
    //กำหนดจำนวนนักศึกษาเเละวิชา
    char names[3][50];
    float scores[3][3];//3คน,3วิชา(0:Math,1:Phy,2:Chem)
    float subject_sum[3]={0,0,0};

    //1.รับข้อมูลจากผู้ใช้
    for(int i=0;i<3;i++){
        printf("Enter name for Student %d:",i+1);
        scanf("%s",names[i]);

        printf("Enter scores for Math,Phy,Chem:");
        for(int j=0; j<3; j++){
        scanf("%f",&scores[i][j]);
        subject_sum[j]+=scores[i][j]; //รวมคะเเนนเพื่อใช้หาค่าเฉลี่ย
    }
}
    //2.เเสดงผลลัพธ์ในรูปเเบบตาราง
    printf("\n==================================================\n");
    printf("%-20s %-10s %-10s %-10s\n","Student(length)","Math","Phy","Chem");
    printf("------------------------------------------------------\n");

    for(int i=0;i<3;i++){
        //สร้างข้อความชื่อพร้อมความยาวเช่น "Ann (3)"
         char name_with_length[100];
         sprintf(name_with_length,"%s(%lu)",names[i],strlen(names[i]));

         printf("%-20s %-10.2f %-10.2f %-10.2f\n",
            name_with_length,
            scores[i][0],
            scores[i][1],
            scores[i][2]);
    }

    printf("------------------------------------------------------\n");
    //เเสดงค่าเฉลี่ยเเต่ละวิชา(ทศนิยม 2 ตำเเหน่ง)
    printf("%-20s %-10.2f %-10.2f %-10.2f\n",
    "Subject average",
    subject_sum[0]/3.0,
    subject_sum[1]/3.0,
    subject_sum[2]/3.0);
  printf("==================================================\n");

  return 0; 
}