#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//MA TRAN DON VI, DOI SO DIEN THOAI, THUONG 2 HON SO, VE TAM GIAC CAN
typedef struct {
    int phan_nguyen;
    int tu_so;
    int mau_so;
} hon_so;
void so1(int n)
{
    int a[50][50];
    int i,j;
    int dem=0;
    int temp=0;

//CODE NHẬP MA TRẬN 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	printf("Nhap a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

//HIỂN THỊ MA TRẬN 
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

//KIỂM TRA MA TRẬN ĐƠN VỊ
    for(i=0;i<n;i++){
        if(a[i][i]==1){
            dem+=1;
        }
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				temp+=1;
			}
		}
	}
	if(dem==n && temp==n*(n-1)){ //MẤU CHỐT
		printf("Ma tran vua nhap chinh la ma tran don vi\n");
	}
	else printf("Ma tran vua nhap khong phai ma tran don vi %d!",dem);
}

void so3(){
	char A[12];
	printf("Moi nhap so dien thoai :");
	fflush(stdin);
	gets(A);

    //KIEM TRA DU LIEU NHAP VAO
	while(strlen(A)<10||strlen(A)>11){
        printf("Moi nhap lai so dien thoai :");
        fflush(stdin);
        gets(A);	
	}
	int i;
	int n=1;
	if(strlen(A)>11){
	A[11]='\0';
    }
//	while(n==1)
	step_1:
	switch(A[0])
	{
		case '1':
		if(A[1]=='6'){
			A[0]=' ';
			A[1]='3';
			n=2;
			printf("So dien thoai moi la :\n %s",A);
		}
		else {
            if(strlen(A)==11)
            {
                printf("Khac nha mang !");
            }
            }
            break;

        case '0':
            for(i=0;i<11;i++)
            {
                A[i]=A[i+1];
            if(i==10)
            {
                A[i]='\0';
            }
	    }
	    goto step_1;
		break;
		default: 
		if(strlen(A)!=10)
		printf("Khac nha mang !");
    }
}
/*---Ham nhap hon so---*/
void nhap_hon_so(hon_so *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Hon so thu - %d: \n", i+1);
        printf("Phan nguyen: ");    scanf("%d", &a[i].phan_nguyen);
        printf("Tu so: ");          scanf("%d", &a[i].tu_so);
        printf("Mau so: ");          scanf("%d", &a[i].mau_so);
    }
}
/*---Ham tinh thuong cua 2 hon so---*/
void thuong(hon_so x1, hon_so x2){
    hon_so a;
    if(x2.tu_so == 0){
        printf("Invalid\n");
        return ;
    }
    a.phan_nguyen = ((x1.phan_nguyen*x1.mau_so + x1.tu_so) * x2.mau_so) / (x1.mau_so*(x2.phan_nguyen*x2.mau_so + x2.tu_so));
    a.mau_so = x1.mau_so*(x2.phan_nguyen*x2.mau_so + x2.tu_so);
    a.tu_so = ((x1.phan_nguyen*x1.mau_so + x1.tu_so) * x2.mau_so) - (a.phan_nguyen * a.mau_so);
    printf("%d %d/%d", a.phan_nguyen, a.tu_so, a.mau_so);
}
void so2(char*k,int n){

//VE TAM GIAC CAN XUOI
	if(k[0]=='X'){
		for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++) printf(" ");
            for(int k=1;k<=2*i-1;k++) printf("*");
            printf("\n");
            //for (j=1;j<=n-i;j++) printf("   ");
            //for (j=1;j<=i;j++) printf(" * ");
            //for(j=i-1; j>=1;j--) printf(" * ");
	   }
	}

//VE TAM GIAC CAN XUOI
	if(k[0]=='N'){
		for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=2*i-1;k++) printf("*");
        printf("\n");
        /*
	    for(q=2;q<=i;q++)
		{
	    printf("   ");
		} 
	   for (j=1;j<=n-i+1;j++) printf(" * ");
	   for (j=1;j<=n-i;j++) printf(" * ");
       */
	   }
    }
}

int main()
{

	hon_so hs[2];
	int m,n;
	char k[2];
	while(m!=5)
	{
		printf("\nMenu\n1.Kiem tra ma tran don vi\n2.Tam giac xuoi nguoc\n3.Chuyen so dien thoai\n4.Phan so\n5.Thoat\n");
		scanf("%d",&m);
		switch(m){
			case 1 : //MA TRẬN ĐƠN VỊ
				printf("Nhap cap cua ma tran:");
				scanf("%d",&n);
				while(n<0){
                    printf("Moi nhap lai cap cua ma tran: \n");
                    scanf("%d",&n);
	            }
				so1(n);
				break;
			case 2 :
				printf("Enter N =");
	            scanf("%d",&n);
	            printf("Enter X or N :");
            	scanf("%s",&k);
            	so2(k,n);
            	break;
            case 3: 
                so3();
                break;
            case 4:
                nhap_hon_so(hs, 2);
                thuong(hs[0], hs[1]);
                break;
            case 5:
            	printf("Goodbye!_____");
            	break;
            default: printf("Error! Please Try Again!____");
		}
	}}
