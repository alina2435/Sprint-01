int mx_strlen(const char *s){
     int p = 0;
     if(!s) return 0;
     while(s[p]!= '\0'){
         ++p;
     }

     return p;
}

