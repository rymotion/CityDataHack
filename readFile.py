#read the .csv files and parse as json to javascript code for maps
import csv

f = open('Schools_LAUSD.csv')
csv_f = csv.reader(f)


for row in csv_f:
	x = row[0]
	y = row[1]

	name = row[4]
	
	CoorDic = {'X': x, 'Y': y, 'School': name}
