<?php
$z[0]=Array("global","",264,290);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",331,360);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",400,458);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",3053,3088);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channel","\r\n        <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n        ",3234,3452);
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<li><a href='~typelink~' class='left_current'>~typename~</a></li>";
$z[5]=Array("global","",3696,3751);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n          <li>\r\n            <h3><a href=\"[field:arcurl/]\"  target=\"_blank\"><font style=\"color:red;\">[field:title/]</font></a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></h3>\r\n            <p>[field:description/]...&nbsp;&nbsp;[<a href=\"[field:arcurl/]\"  target=\"_blank\">查看详情</a>]</p>\r\n          </li>\r\n          ",4514,4888);
$z[6][4]['perpage']="20";
$z[7]=Array("pagelist","",4937,4966);
$z[7][4]['listsize']="4";
$z[8]=Array("include","",5119,5156);
$z[8][4]['filename']="footer.htm";

?>