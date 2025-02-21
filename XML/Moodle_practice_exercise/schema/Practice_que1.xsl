
<xsl:stylesheet  version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/books">
	<html>
	<head></head>
	<body>
		<!-- Table 1 (a,b,c)-->
		<b>a,b,c :</b>
		<table id="one" border="1">
			<tr>
			<th>Title</th>
			<th>Author</th>
			<th>Price</th>
			</tr>
			<xsl:for-each select="book">
			<xsl:sort select="price" order="ascending"/>
					<xsl:if test="price &gt; 10">
						<tr>
						<td><xsl:value-of select="title"/></td>
						<td><xsl:value-of select="author"/></td>
						<td><xsl:value-of select="price"/></td>
						</tr>
					</xsl:if>
			</xsl:for-each>
		</table>
		<!-- Table 2 (d,e)-->
		<b>d,e :</b>
		<table id="two" border="1">
			<tr>
			<th style="color: blue;">Title</th>
			<th style="color: blue;">Author</th>
			<th style="color: blue;">Year</th>
			</tr>
			<xsl:for-each select="book">
			<xsl:sort select="year" order="descending"/>
						<tr>
						<td style="color: red;"><xsl:value-of select="title"/></td>
						<td style="color: red;"><xsl:value-of select="author"/></td>
						<td style="color: red;"><xsl:value-of select="year"/></td>
						</tr>
			</xsl:for-each>
		</table>
		<!-- Table 3 (f,g,h)-->
		<b>f,g,h :</b>
		<table id="three" border="1">
			<tr>
			<th>Title</th>
			<th>Author</th>
			<th>Year</th>
			<th>Price</th>
			</tr>
			<xsl:for-each select="book">
				<xsl:if test="year &gt;= 1950 or price &gt; 10">
						<tr>
						<td><xsl:value-of select="title"/></td>
						<td><xsl:value-of select="author"/></td>
						<td><xsl:value-of select="year"/></td>
						<td><xsl:choose>
							<xsl:when test="price &gt; 11"><xsl:value-of select="price"/> is Pricy Book</xsl:when>
							<xsl:otherwise><xsl:value-of select="price"/></xsl:otherwise>
							</xsl:choose></td>
						</tr>
				</xsl:if>
			</xsl:for-each>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>