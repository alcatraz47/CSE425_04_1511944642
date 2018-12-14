#!/bin/bash



while :
do
  echo -e "Please Press 1 to 6 for Searching and 0 to Exit"
  read INPUT_STRING
  case $INPUT_STRING in
	0)	
		break
		;;	
	1)
		echo -e "Please Type a Year to Search:"
		read foo
		foo = foo + ","
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"
		fi
		;;
	2)
		echo -e "Please Type any of 113 Cause Name to Search:"
		read foo
           	foo="," + $foo + ","
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"		
		fi
		;;
		
	3)
		echo -e "Please Type a Cause to Search:"
				
		read foo
           	foo="," + $foo + ","
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"		
		fi
		;;
	4)
		echo -e "Please Type a State to Search:"
		read foo
		#foo+="T"
		foo = "," + $foo +","
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"		
		fi
		;;
	5)
		echo -e "Please Type any Number of Deaths to Search:"
		read foo
		#foo+="T"
		foo = "," + $foo +","
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"		
		fi
		;;
	6)
		echo -e "Please Type any Age-adjusted Death Rates to Search:"
		read foo
		#foo+="T"
		foo = "," + $foo
		if readingFile=$(grep -i "$foo" NCHS_-_Leading_Causes_of_Death__United_States.csv)
			then echo -e "$readingFile"
		else
			echo -e "Sorry, No Such String in this File!"		
		fi
		;;

	*)
		echo "Please Enter a Valid Input"
		;;
  esac
done

