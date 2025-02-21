<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/Order_Detail">
		<html>
			<body>
				<table border="1">
					<tr>
						<th>OrderNumber</th>
						<th>Orderate</th>
						<th>OrderAmount</th>
						<th>ItemPrice</th>
						<th>ItemName</th>
						<th>Quantity</th>
					</tr>
					<tr>
						<td><xsl:value-of select="OrderNumber"></xsl:value-of></td>
						<td><xsl:value-of select="Orderate"></xsl:value-of></td>
						<td><xsl:value-of select="OrderAmount"></xsl:value-of></td>
						<td><xsl:value-of select="ItemPrice"></xsl:value-of></td>
						<td><xsl:value-of select="ItemName"></xsl:value-of></td>
						<td><xsl:value-of select="Quantity"></xsl:value-of></td>
					</tr>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>