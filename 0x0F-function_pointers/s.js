function splitAtX(string) {
let i = 0;
let newStr1, newStr2;
for ( ; i < string.length; i++)
{
if (string[i] === "x")
break;
}
if (i !== 0)
newStr1 = string.slice(0,i);
newStr2 = string.slice(0,i);

if (newStr1.length > newStr2.length)
return (newStr1)
else return (newStr2);
}

function hasOne(array) {
let i = 0, check = false;
for ( ; array[i] !== '\0'; i++)
{
if (array[i] === 1)
check = true;
break;
}
return (check);
}
