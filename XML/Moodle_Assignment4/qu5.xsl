<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/students">
		<html>
			<body>
				<table border="1" cellpadding="3">
					<tr>
						<th>Number</th>
						<th>Name</th>
						<th>Address</th>
						<th>Birthdate</th>
						<th>Gender</th>
						<th>MobileNo</th>
						<th>Result</th>
					</tr>
					<xsl:for-each select="student">
					<xsl:sort select="Result" order="ascending"></xsl:sort>
					<tr>
						<td><xsl:number format="1"></xsl:number></td>
						<td><xsl:value-of select="StudentName"></xsl:value-of></td>
						<td><xsl:value-of select="Personal_Info/Address"></xsl:value-of></td>
						<td><xsl:value-of select="Personal_Info/Birthdate"></xsl:value-of></td>
						<td><xsl:value-of select="Personal_Info/Gender"></xsl:value-of></td>
						<td><xsl:value-of select="Personal_Info/MobileNo"></xsl:value-of></td>
						<td><xsl:value-of select="Result"></xsl:value-of></td>
					</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>	
</xsl:stylesheet>