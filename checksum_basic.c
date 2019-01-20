int main(short argc, char **argv)
{
 
   unsigned char serNum [] = "DS0008D-0111A";
   unsigned short checksum;
 
   checksum = CalcChksum(serNum, 13);
    
cout << hex << checksum << "\n" << "\n"; //Here I get only the first byte 2B on the output, should be FD 2B;
}
 
unsigned short CalcChksum(unsigned char *start_addr, int bytecnt)
{
   int i;
   unsigned short chksum;
 
   chksum = 0;
   // Calculate 1's complement chksum
   for(i=0; i<bytecnt; i++)
      chksum+= (unsigned short)*(start_addr+i);
   chksum = (char)~chksum;
   return(chksum);
 
}
