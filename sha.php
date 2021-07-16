<!--	Author: Anthony Storti
		Date:	October 29, 2020
		File:	sha.php
		Purpose: call sha.cpp and pass parameters from sha.html then display returned output
-->
<html>
<head>
	<title>SHA HASH SEARCH</title>
	<link rel ="stylesheet" type="text/css" href="sample.css">
</head>
<body>
<?php
		// retrieve data from post array and assign variables
    $input = $_POST['data'];
    $dictionary = $_POST['dictionary'];
    $iSize = strlen($input);
    // compile and execute C++ code with two parameters 
    $output = shell_exec("g++ -std=c++1y -o sha.exe sha.cpp");
    $output = shell_exec("sha.exe $input $dictionary");
    // display output from C++ file
    echo $output;
?>
<!--button to return to sha.html to enter another hash-->
<form action="sha.html">
         <button type="submit">Enter a different hash</button>
      </form>
</body>
</html>
