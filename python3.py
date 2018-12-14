#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Dec 14 21:28:56 2018

@author: arfan
"""

while True:
    flag = False
    print("\nPlease Press 1 to 6 for Searching and 0 to Exit")
    try:
        file = open("NCHS_-_Leading_Causes_of_Death__United_States.csv")
    except Exception:
        print("\nThere Is No File of Such Name")
    with file:
        option = input()
        option = int(option)
        if option > 6 or option < 0:
            print("\nPlease Enter a Valid Input")
        elif option == 1:
            year = input("\nPlease Type a Year to Search: ")
            year = year + ','
            if year:
                for line in file:
                    flag = True
                    if year in line:
                        print("\n"+line)
        elif option == 2:
            cause113 = input("\nPlease Type any of 113 Cause to Search: ")
            cause113 = "," + cause113 + ","
            if cause113:
                for line in file:
                    flag = True
                    if cause113 in file:
                        print("\n"+line)
        elif option == 3:
            cause113 = input("\nPlease Type any of 113 Cause to Search: ")
            cause113 = "," + cause113 + ","
            if cause113:
                for line in file:
                    flag = True
                    if cause113 in file:
                        print("\n"+line)
        elif option == 4:
            state = input("\nPlease Type a State to Search: ")
            state = "," + state + ","
            if state:
                for line in file:
                    flag = True
                    if state in file:
                        print("\n"+line)
        elif option == 5:
            deaths = input("\nPlease Type any Number of Deaths to Search: ")
            deaths = "," + deaths + ","
            if deaths:
                for line in file:
                    flag = True
                    if deaths in file:
                        print("\n"+line)
        elif option == 6:
            death_rate = input("\nPlease Type any Age-adjusted Death Rates to Search: ")
            death_rate = "," + death_rate
            if death_rate:
                for line in file:
                    flag = True
                    if death_rate in file:
                        print("\n"+line)
        elif option == 0:
            break
        elif flag == False:
            print("\nSorry, No Such String in this File!")