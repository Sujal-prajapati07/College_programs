<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/Books">
		<html>
			<body>
				<table border="1">
					<xsl:for-each select="book">
						<xsl:if test="year &lt; 1998">
						<tr>
							<th><xsl:value-of select="@title"></xsl:value-of></th>
							<td><xsl:value-of select="author"></xsl:value-of></td>
							<td><xsl:value-of select="year"></xsl:value-of></td>
							<td><xsl:value-of select="publisher"></xsl:value-of></td>
						</tr>
						</xsl:if>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>