<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/employees">
		<html>
			<body>
				<th>Table-1</th>
				<table border="1" cellpadding="4" cellspacing="4">
					<tr>
						<th>Name</th>
						<th>Department</th>
						<th>Salary</th>
						<th>Joining-Year</th>
					</tr>
					<xsl:for-each select="employee">
					<xsl:sort select="salary" order="descending"></xsl:sort>
					<xsl:if test="joining-year &gt; 2015 or salary &gt; 60000">
						<tr>
							<td><xsl:value-of select="name"></xsl:value-of></td>
							<td><xsl:value-of select="department"></xsl:value-of></td>
							<td><xsl:value-of select="salary"></xsl:value-of></td>
							<td><xsl:value-of select="joining-year"></xsl:value-of></td>
						</tr>
					</xsl:if>
					</xsl:for-each>
				</table>
				
				<th>Table-2</th>
				<table border="1" cellpadding="4" cellspacing="4">
					<tr>
						<th>Name</th>
						<th>Department</th>
						<th>Salary</th>
						<th>Joining-Year</th>
						<th>Earner</th>
					</tr>
					
					<xsl:for-each select="employee">
					<xsl:if test="salary &gt; 70000">			
					<tr>
						<td><xsl:value-of select="name"></xsl:value-of></td>
						<td><xsl:value-of select="department"></xsl:value-of></td>
						<td><xsl:value-of select="salary"></xsl:value-of></td>
						<td><xsl:value-of select="joining-year"></xsl:value-of></td>
						<td>High Earner</td>
					</tr>
					</xsl:if>	
					</xsl:for-each>
			
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>