<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/books">
		<html>
			<head>
				<style>
					.abc{
						color:blue;
					}
					.msg{
						color:red;
					}
				</style>
			</head>
			<body>
				<h1>Table-1</h1>
				<table border="1" cellpadding="5" cellspacing="5">
					<tr>
						<th>Title</th>
						<th>Author</th>
						<th>Price</th>
					</tr>
				<xsl:for-each select="book">
				<xsl:sort select="price" order="ascending"></xsl:sort>
				<xsl:if test="price &gt; 10">
				<tr>
						<td><xsl:value-of select="title"></xsl:value-of></td>
						<td><xsl:value-of select="author"></xsl:value-of></td>
						<td><xsl:value-of select="price"></xsl:value-of></td>
				</tr>
				</xsl:if>
				</xsl:for-each>
				</table>
				
				<h1>Table-2</h1>
				<table border="1" cellpadding="5" cellspacing="5">
					<tr>
						<th class="abc">Title</th>
						<th class="abc">Author</th>
						<th class="abc">Year</th>
					</tr>
					<xsl:for-each select="book">
					<xsl:sort select="year" order="descending"></xsl:sort>
					<xsl:if test="year &gt; 1950 or price &gt;10">
						<tr>
							<td class="msg"><xsl:value-of select="title"></xsl:value-of></td>
							<td class="msg"><xsl:value-of select="author"></xsl:value-of></td>
							<td class="msg"><xsl:value-of select="year"></xsl:value-of></td>
							
						</tr>
					</xsl:if>
					</xsl:for-each>
				</table>
				
				<h1>Table-3</h1>
				<table border="1" cellpadding="5" cellspacing="5">
					<tr>
						<th>Quntity</th>
						<th>Title</th>
						<th>Author</th>
						<th>Year</th>
						<th>Price</th>
						<th>Condition</th>
					</tr>
					<xsl:for-each select="book">
					<xsl:if test="price &gt; 11">
						<tr>
							<td><xsl:number format="1"></xsl:number></td>
							<td><xsl:value-of select="title"></xsl:value-of></td>
							<td><xsl:value-of select="author"></xsl:value-of></td>
							<td><xsl:value-of select="year"></xsl:value-of></td>
							<td><xsl:value-of select="price"></xsl:value-of></td>
							<td>Pricey Book</td>
						</tr>
					</xsl:if>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>	
</xsl:stylesheet>