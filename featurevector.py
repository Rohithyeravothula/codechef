import scipy as sp
import numpy
import glob
def readimagefiles(s):
	a=glob.glob(s/"*.jpg")
	print len(a)
readimagefiles(airplanes)
