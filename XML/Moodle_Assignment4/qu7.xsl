<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/Email">
	<html>
		<body>
			<h1>Student Report Card</h1>
			<p>Roll_No</p>
			<p>Name</p>
			<p>Marks</p>
			<p>Rank</p>
			<br>
			
			<xsl:for-each select="Student">
				<p><xsl:value-of select="Roll_no"></xsl:value-of></p>
				<p><xsl:value-of select="Name"></xsl:value-of></p>
				<p><xsl:value-of select="Marks"></xsl:value-of></p>
				<xsl:choose>
					<xsl:when test="Rank &lt;6">
						<p>Top Student</p>
					</xsl:when>
					<xsl:when test="Rank &gt;5 and Rank &lt;11">
						<p>Top 10 Student</p>
					</xsl:when>
					<xsl:otherwise>
						<p>Average Student</p>
					</xsl:otherwise>
				</xsl:choose>
				<hr></hr>
			</xsl:for-each>
			</br>
		</body>
	</html>
	</xsl:template>
</xsl:stylesheet>