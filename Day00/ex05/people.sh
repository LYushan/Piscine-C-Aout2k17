ldapsearch -Q uid="z*" cn | grep "cn: Z" | cut -d ':' -f 2 | cut -c2- | sort -rf
