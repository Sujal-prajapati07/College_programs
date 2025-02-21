<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="Emp_info">
		<html>
			<body>
				<xsl:for-each select="employee">
					<p>Employee id:<xsl:value-of select="@EmpId"></xsl:value-of></p>
					<h1>Employee first name:<xsl:value-of select="first_name"></xsl:value-of></h1>
					<h1>Employee Last name:<xsl:value-of select="last_name"></xsl:value-of></h1>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>