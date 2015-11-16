<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3064,3099);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n        <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n        ",3248,3466);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li><a href='~typelink~' class='left_current'>~typename~</a></li>";
$z[6]=Array("field","",3652,3681);
$z[6][4]['name']="typename";
$z[7]=Array("list","\r\n          <li> <a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\"></a>\r\n            <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n            <p>[field:description function='cn_substr(@me,200)'/]...</p>\r\n            <a href=\"[field:arcurl/]\" title=\"[field:title/]\" class=\"a_more\">查看详细</a> </li>\r\n          ",3845,4255);
$z[7][4]['pagesize']="5";
$z[8]=Array("pagelist","",4337,4391);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[9]=Array("include","",4545,4582);
$z[9][4]['filename']="footer.htm";

?>