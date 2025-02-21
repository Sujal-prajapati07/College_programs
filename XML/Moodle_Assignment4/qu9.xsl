<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/Students">
		<html>
			<body>
				<table border="1" cellpadding="5">
					<tr>
						<th>Roll_No</th>
						<th>Name</th>
						<th>Marks</th>
						<th>Rank</th>
						<th>Result</th>
					</tr>
					<xsl:for-each select="Student">
					<tr>
						<td><xsl:number format="1"></xsl:number></td>
						<td><xsl:value-of select="Name"></xsl:value-of></td>
						<td><xsl:value-of select="Marks"></xsl:value-of></td>
						<td><xsl:value-of select="Rank"></xsl:value-of></td>
						<td><xsl:value-of select="Result"></xsl:value-of></td>
					</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>	
</xsl:stylesheet>