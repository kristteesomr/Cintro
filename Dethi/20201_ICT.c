#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct Group{
    char groupid;
    char teamname[4][20];
    int points[4];
    int goals[4];

}group;
void clear_buffer(){
	int ch;
	while ((ch=getchar()) !='\n' && ch!=EOF);
}

int check_uppercase(group doi1){
    if (doi1.groupid >= 'A' && doi1.groupid<='Z') return 1;
    else return 0;
}

int check_collisions_of_team_name(group doi1[100], int n, char tmp[][20]){
    int i, j, k;
    for(i=0; i<n; i++){
        for(j=0; j<4; j++)
            for(k=0; k<4; k++){
                if(strcmp(doi1[i].teamname[j], tmp[k])==0){
                    printf("Ten doi %s da xuat hien\n", tmp[k]);
                    return 1;
                }
            }
    }
    for (i = 0;i<n; i++){
    for (k = 0;k<4;k++){
        for (int m = 0;m<4;m++){
            if (strcmp(doi1[i].teamname[k],doi1[i].teamname[j]) == 0){
                return 1;
            }
        }
    }
    }
    return 0;
}

void find_information_group(group doi1[],int *n,char vcl[20]){
    printf("Nhap ten doi ban muon tim \n");
    scanf("%s",vcl);
    for (int i = 0;i<*n;i++){
        for (int j = 0;j<4;j++){
            if (strcmp(vcl,doi1[i].teamname[j]) == 0){
                printf("Group %c, Point %d, Goal %d \n",doi1[i].groupid,doi1[i].points[j],doi1[i].goals[j]);
            }
        }
    }
}
int return_group(group doi1[],int n,char vcl[20]){

    for (int i = 0;i<n;i++){
        for (int j = 0;j<4;j++){
            if (strcmp(vcl,doi1[i].teamname[j]) == 0){
                return i;
            }
        }
    }
}
int return_team(group doi1[],int n,char vcl[20]){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<4;j++){
            if (strcmp(vcl,doi1[i].teamname[j]) == 0){
                return j;
            }
        }
    }
}

void input_group_informations(group doi1[], int * n){
    int m;
    int check = 0;
    do {
        printf("Nhap so bang thi dau\n");
        scanf("%d",&m);
    } while(m+*n > 8 || m < 0);

    for (int i = *n;i<m+*n;i++){

        printf("Nhap thong tin id cua doi \n");
        do {
            scanf(" %c",&doi1[i].groupid);
            if ((!check_uppercase(doi1[i])) && check_collisions_id(doi1,m,n,doi1[i].groupid)) printf("Nhap lai id cua doi \n");
        } while ((!check_uppercase(doi1[i])) && check_collisions_id(doi1,m,n,doi1[i].groupid));

        printf("Nhap ten tung doi trong bang\n");
        for (int j = 0;j<4;j++){

            do{
            printf("Nhap ten cua doi %d: \n",j+1);
            scanf("%s",doi1[i].teamname[j]);
            if (check_collisions_of_team_name(doi1,i,doi1[i].teamname)){
                printf("Bi trung, nhap lai ten cua doi %d: \n",j+1);
            }
            }while(check_collisions_of_team_name(doi1,i,doi1[i].teamname));

        }
        printf("Nhap diem cua tung doi \n");
        for (int j =0;j<4;j++){
            do {
                scanf("%d",&doi1[i].points[j]);
                if (doi1[i].points[j] <= 0) {
                    printf("Nhap lai diem cua doi nay \n");
                }
            } while(doi1[i].points[j] <= 0);

        }
        printf("Nhap goals cua tung doi trong bang\n");
        for (int j = 0;j<4;j++){
            scanf("%d",&doi1[i].goals[j]);
        }
    }
    *n += m;

}

void inthongtin(group groups[], int n){
    int i, j;
    for(i=0; i<n; i++){
        printf("Group %c\n", groups[i].groupid);
        printf("Team\tPoint\tGoal\n");
        for(j=0; j<4; j++){
            printf("%s\t%d\t%d\n", groups[i].teamname[j], groups[i].points[j], groups[i].goals[j]);
        }
    }
}
void input_informations_of_two_teams(group doi1[],int n,char p1[20],char p2[20]){
    int a;int b;
    printf("Nhap thong tin tran dau: \n");
    scanf("%s %s %d %d",p1,p2,&a,&b);
    int g1 = return_group(doi1,n,p1);
    int t1 = return_team(doi1,n,p1);
    int g2 = return_group(doi1,n,p2);
    int t2 = return_team(doi1,n,p2);
    if (g1 != g2) {
        printf("Different Group!\n");
    }
    else {
        doi1[g1].points[t1] += a-b;
        doi1[g1].points[t2] += b-a;
        doi1[g1].goals[t1] += a;
        doi1[g1].goals[t2] += b;
    }
    for(int i=0; i<n; i++){
        printf("Group %c\n", doi1[i].groupid);
        printf("Team\tPoint\tGoal\n");
        for(int j=0; j<4; j++){
            printf("%s\t%d\t%d\n", doi1[i].teamname[j], doi1[i].points[j], doi1[i].goals[j]);
        }
    }
}
void sort(group doi1[],int n){
    char temp[20];
    int temp_point,temp_goal;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<4;j++){
            for (int k = j+1;k<4;k++){
                if ((doi1[i].points[j] < doi1[i].points[k]) || (doi1[i].points[j] == doi1[i].points[k]) && (doi1[i].goals[j] < doi1[i].goals[k])){
                    strcpy(temp,doi1[i].teamname[j]);
                    strcpy(doi1[i].teamname[j],doi1[i].teamname[k]);
                    strcpy(doi1[i].teamname[k],temp);

                    temp_point = doi1[i].points[j];
                    doi1[i].points[j] = doi1[i].points[k];
                    doi1[i].points[k] = temp_point;

                    temp_goal = doi1[i].goals[j];
                    doi1[i].goals[j] = doi1[i].goals[k];
                    doi1[i].goals[k] = temp_goal;
                }
            }
        }
    }
    inthongtin(doi1,n);
}
int main(){
    //--------------------------------------------------------
    int choice;
    group doi1[100];
    int n = 0;
    char vcl[20],p1[20],p2[20];
    //---------------------------------------------------------
    do{
        printf("Nhap tiep lua chon cua ban di: \n");
        printf("1.Bo sung thong tin/ Cap nhap thong tin \n");
        printf("2.In thong tin \n");
        printf("3.Tim kiem thong tin cua mot doi bong \n");
        printf("4.Nhap thong tin ket qua tran dau giua 2 doi\n");
        printf("5.Sap xep thu tu trong moi bang \n");
        printf("6.Thoat khoi chuong trinh\n");
        scanf("%d",&choice);
        clear_buffer();
        switch(choice){
            case 1:
                input_group_informations(doi1,&n);
                break;
            case 2:
                inthongtin(doi1,n);
                break;
            case 3:
                find_information_group(doi1,&n,vcl);
                break;
            case 4:
                input_informations_of_two_teams(doi1,n,p1,p2);
                break;
            case 5:
                sort(doi1,n);
                break;
            case 6:
                printf("Goodbye, Sir\n");
                return 0;
        }
    } while(true);
}