/* i is modified twice between sequence points */
i = ++i + 1; 
 
/* i is read other than to determine the value to be stored */
a[i++] = i;   
