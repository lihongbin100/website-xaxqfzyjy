<?php
$z[0]=Array("global","",239,267);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",282,308);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",354,384);
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",423,450);
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("global","",474,506);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",597,629);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",701,733);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("include","",804,839);
$z[7][4]['filename']="head.htm";
$z[8]=Array("arclist","\r\n					<li><a target=\"_blank\" href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" /></a></li>\r\n					",905,1081);
$z[8][4]['typeid']="28";
$z[8][4]['row']="5";
$z[8][4]['orderby']="weight";
$z[8][4]['orderway']="asc";
$z[9]=Array("type","\r\n						<div class=\"part_tit\"><p class=\"part_tit_wrap\">学院动态<span class=\"part_tit_en\">News</span></p><a href=\"[field:typelink/]\" class=\"part_title_more\">更多</a></div>\r\n						",2050,2267);
$z[9][4]['typeid']="14";
$z[10]=Array("arclist","\r\n										<li>\r\n											<div class=\"slideBox_left\"><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\"></a></div>\r\n											<div class=\"slideBox_right\">\r\n												<div class=\"slideBox_tit\"><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n												<div class=\"slideBox_desc\">[field:description function=\"cn_substr(@me,100)\"/]...<a href=\"[field:arcurl/]\">[详细]</a></div>\r\n												<div class=\"slideBox_date\">[field:pubdate function=GetDateMK(@me)/]</div>\r\n											</div>\r\n										</li>\r\n										",2396,2989);
$z[10][4]['typeid']="14";
$z[10][4]['limit']="0,3";
$z[10][4]['orderby']="pubdate";
$z[11]=Array("arclist","\r\n									<li><a href=\"[field:arcurl/]\">[field:title/]<span class=\"list_date\">[field:pubdate function=GetDateMK(@me)/]</span></a></li>\r\n									",3244,3459);
$z[11][4]['typeid']="14";
$z[11][4]['limit']="3,4";
$z[11][4]['orderby']="pubdate";
$z[12]=Array("type","\r\n						<div class=\"part_tit\"><p class=\"part_tit_wrap\">通知公告<span class=\"part_tit_en\">Notice</span></p><a href=\"[field:typelink/]\" class=\"part_title_more\">更多</a></div>\r\n						",3552,3771);
$z[12][4]['typeid']="14";
$z[13]=Array("arclist","\r\n								<li [field:pubdate runphp='yes'] \$ntime = time(); \$day3 = 3600 * 24 * 3; if((\$ntime - @me) < \$day3) @me = \"class='last'\"; else @me = \"\"; [/field:pubdate]>\r\n									<a href=\"[field:arcurl/]\">\r\n										<div class=\"part1_r_date\">\r\n											<span class=\"part1_r_date_d\">[field:pubdate function='strftime(\"%d\",@me)'/]</span>\r\n											<span class=\"part1_r_date_ym\">[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</span>\r\n										</div>\r\n										<div class=\"part1_r_info\">\r\n											<div class=\"part1_r_tit\">\r\n												[field:title/]\r\n											</div>\r\n											<div class=\"part1_r_desc\">\r\n												[field:description function=\"cn_substr(@me,80)\"/]...\r\n											</div>\r\n										</div>\r\n									</a>\r\n								</li>\r\n								",3825,4644);
$z[13][4]['typeid']="14";
$z[13][4]['row']="4";
$z[13][4]['orderby']="pubdate";
$z[14]=Array("type","\r\n									<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n									",4842,4955);
$z[14][4]['typeid']="15";
$z[15]=Array("type","\r\n									<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n									",4966,5079);
$z[15][4]['typeid']="20";
$z[16]=Array("type","\r\n									<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n									",5090,5203);
$z[16][4]['typeid']="16";
$z[17]=Array("type","\r\n									<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n									",5214,5327);
$z[17][4]['typeid']="17";
$z[18]=Array("arclist","\r\n									<li><span class=\"date\">[field:pubdate function=GetDateMK(@me)/]</span><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n									",5407,5627);
$z[18][4]['typeid']="15";
$z[18][4]['row']="7";
$z[18][4]['orderby']="pubdate";
$z[19]=Array("arclist","\r\n									<li><span class=\"date\">[field:pubdate function=GetDateMK(@me)/]</span><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n									",5667,5887);
$z[19][4]['typeid']="20";
$z[19][4]['row']="7";
$z[19][4]['orderby']="pubdate";
$z[20]=Array("arclist","\r\n									<li><span class=\"date\">[field:pubdate function=GetDateMK(@me)/]</span><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n									",5927,6147);
$z[20][4]['typeid']="16";
$z[20][4]['row']="7";
$z[20][4]['orderby']="pubdate";
$z[21]=Array("arclist","\r\n									<li><span class=\"date\">[field:pubdate function=GetDateMK(@me)/]</span><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></li>\r\n									",6187,6407);
$z[21][4]['typeid']="17";
$z[21][4]['row']="7";
$z[21][4]['orderby']="pubdate";
$z[22]=Array("type","\r\n							<p class=\"part2_tit_wrap\">专题报道</p><a href=\"[field:typelink/]\" class=\"part2_title_more\">更多</a>\r\n							",6617,6773);
$z[22][4]['typeid']="24";
$z[23]=Array("arclist","\r\n								<a href=\"[field:arcurl/]\">\r\n									<img src=\"[field:picname/]\" />\r\n									<div class=\"part_2_top1_mask\">[field:title/]</div>\r\n								</a>\r\n								",6864,7095);
$z[23][4]['typeid']="24";
$z[23][4]['limit']="0,1";
$z[23][4]['orderby']="pubdate";
$z[24]=Array("arclist","\r\n								<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n								",7154,7296);
$z[24][4]['typeid']="24";
$z[24][4]['limit']="1,3";
$z[24][4]['orderby']="pubdate";
$z[25]=Array("type","\r\n						<p class=\"part3_tit_wrap\">学生活动</p><a href=\"[field:typelink/]\" class=\"part3_title_more\">更多</a>\r\n						",7412,7566);
$z[25][4]['typeid']="25";
$z[26]=Array("arclist","\r\n								<li>\r\n									<div class=\"pic\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" /></a></div>\r\n									<div class=\"title\"><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></div>\r\n								</li>\r\n								",7735,8044);
$z[26][4]['typeid']="25";
$z[26][4]['row']="10";
$z[26][4]['orderby']="pubdate";
$z[27]=Array("include","",8327,8364);
$z[27][4]['filename']="footer.htm";

?>