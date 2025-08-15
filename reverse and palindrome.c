void main()

{
 int n;
 int rev = 0;
 
 printf("enter the num n: ");
 scanf("%d",&n);
 
 while (n>0)
 
 { 
     rev = rev*10;  // reverse concept
     
     rev = rev + (n%10);
     n = n/10;
     
 }
 
 printf("reverse %d",rev);
 
 if(n==rev)  // gives the given num is palindrome or not
 {
     printf("the value is palindrome");
     
 }
 else 
 {
     printf("the value is not palindrome");
 }
 }
