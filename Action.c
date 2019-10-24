Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("_ga=GA1.2.423874335.1569410887; DOMAIN=islogin.zensar.com");

	web_url("zenloungeplus.zensar.com", 
		"URL=https://zenloungeplus.zensar.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_custom_request("urs.asmx", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=D2MjnnyktyOC8qzTJLqaTA%3d%3d&MSURS-MAC=jkVPyhrmnPc%3d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"6\"><G>4A72F430-B40C-4D36-A068-CE33ADA5ADF9</G><O>A12B7F59-C8B2-A371-EC2A-578D233AA14E</O><DID>gTVW7M2YjmMbSURs0toUYxCYG4NSNFmTtqvEeGC8658=:1</DID><UID>w:876AAF02-E05E-91F4-5D75-070C1688C020</UID><D>10.0.8110.6</D><C>11.0.0.0</C><OS>10.0.17134.0.0</OS><I>9.11.17134.0</I><L>en-ZA</L><RU></RU><RI>0.0.0.0</RI><R><Rq><URL>aHR0cHM6Ly9pc2xvZ2luLnplbnNhci5jb20vWmVuSXMvbG9naW4/"
		"c2VydmljZT1odHRwcyUzQSUyRiUyRnplbmxvdW5nZXBsdXMuemVuc2FyLmNvbSUyRmMlMkZwb3J0YWwlMkZsb2dpbiUzRnJlZGlyZWN0JTNEJTI1MkYlMjZyZWZlcmVyUGxpZCUzRDMyODE3JTI2cF9sX2lkJTNEMTE4MTc2NjMz</URL><O>PRE</O><T>TOP</T><HIP>192.168.43.147</HIP></Rq><Rq><URL>aHR0cDovLzE5Mi4xNjguNDMuMTQ3</URL><O>PRE</O><T>IP</T><HIP>192.168.43.147</HIP></Rq></R><WA/><PRT>4049</PRT></RepLookup>", 
		EXTRARES, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:300", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		"Url=https://islogin.zensar.com/ZenIs/fonts/Roboto-Regular.ttf", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=BC04072266A54E118F7F8F3BD895A781&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20190927; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	lr_think_time(5);

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		"Url=https://islogin.zensar.com/ZenIs/images/logos/password.png", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		"Url=https://islogin.zensar.com/ZenIs/images/logos/user-icon.png", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		"Url=https://islogin.zensar.com/ZenIs/images/logos/main-bg.jpg", "Referer=https://islogin.zensar.com/ZenIs/login?service=https%3A%2F%2Fzenloungeplus.zensar.com%2Fc%2Fportal%2Flogin%3Fredirect%3D%252F%26refererPlid%3D32817%26p_l_id%3D118176633", ENDITEM, 
		LAST);

	web_custom_request("urs.asmx_2", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=KYqLT/VwQe8wFsiOIImF/A%3d%3d&MSURS-MAC=FMCfo9rVQAs%3d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"6\"><G>4A72F430-B40C-4D36-A068-CE33ADA5ADF9</G><O>A9E31E13-E624-111E-033F-F4A4930015D4</O><DID>gTVW7M2YjmMbSURs0toUYxCYG4NSNFmTtqvEeGC8658=:1</DID><UID>w:876AAF02-E05E-91F4-5D75-070C1688C020</UID><D>10.0.8110.6</D><C>11.0.0.0</C><OS>10.0.17134.0.0</OS><I>9.11.17134.0</I><L>en-ZA</L><RU></RU><RI>0.0.0.0</RI><R><Rq><URL>aHR0cHM6Ly9pc2xvZ2luLnplbnNhci5jb20vWmVuSXMvbG9naW4/"
		"c2VydmljZT1odHRwcyUzQSUyRiUyRnplbmxvdW5nZXBsdXMuemVuc2FyLmNvbSUyRmMlMkZwb3J0YWwlMkZsb2dpbiUzRnJlZGlyZWN0JTNEJTI1MkYlMjZyZWZlcmVyUGxpZCUzRDMyODE3JTI2cF9sX2lkJTNEMTE4MTc2NjMz</URL><O>POST</O><T>TOP</T><HIP>192.168.43.147</HIP></Rq><Rq><URL>aHR0cHM6Ly9pc2xvZ2luLnplbnNhci5jb20vemVuaXMvbG9naW47anNlc3Npb25pZD1hZjAzMTU2YWUyY2IxM2FiZDYyNzUzNjgxNmRhMzlkZT9zZXJ2aWNlPWh0dHBzOi8vemVubG91bmdlcGx1cy56ZW5zYXIuY29tL2MvcG9ydGFsL2xvZ2luP3JlZGlyZWN0PS8mcmVmZXJlcnBsaWQ9MzI4MTcmcF9sX2lkPTExODE3NjYzMw==</URL><O>POST</O"
		"><T>ACTION</T><HIP>183.78.186.31</HIP></Rq></R><WA/><PRT>10966</PRT></RepLookup>", 
		LAST);

	return 0;
}