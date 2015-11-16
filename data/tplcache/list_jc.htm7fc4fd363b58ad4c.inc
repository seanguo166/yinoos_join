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
$z[5]=Array("field","",3154,3183);
$z[5][4]['name']="typename";
$z[6]=Array("list","\r\n    <li> <a href=\"[field:arcurl/]\" title=\"[field:title/]\" class=\"special_img\"><img src=\"[field:picname/]\"></a>\r\n      <div class=\"special_div\">\r\n        <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n        <p>[field:description function='cn_substr(@me,500)'/]...</p>\r\n        <div class=\"bottom\"> <font>浏览量：[field:click/]</font> <a href=\"[field:arcurl/]\">更多详细>></a> </div>\r\n      </div>\r\n    </li>\r\n    ",3221,3711);
$z[6][4]['pagesize']="5";
$z[7]=Array("pagelist","",3775,3829);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[8]=Array("include","",3879,3916);
$z[8][4]['filename']="footer.htm";

?>