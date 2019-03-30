function round(n)
	    return n % 1 >= 0.5 and math.ceil(n) or math.floor(n)
end

a,b = io.read("*n", "*n")
tot = a/(b*60)
round(tot)
sarahrong = string.format("%.2f", tot)
io.write(sarahrong, " meters/per second")
