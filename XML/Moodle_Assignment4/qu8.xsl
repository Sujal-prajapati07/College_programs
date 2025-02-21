<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="Students">
		<html>
			<body>
				<h1>Report Card</h1>
				<p>Roll_No</p>
				<p>Name</p>
				<p>Marks</p>
				<p>Rank</p>
				<p>Result</p>
				<br>
					<xsl:for-each select="Student">
					<p><xsl:value-of select="Roll_No"></xsl:value-of></p>
					<p><xsl:value-of select="Name"></xsl:value-of></p>
					<p><xsl:value-of select="Marks"></xsl:value-of></p>
					<p><xsl:value-of select="Rank"></xsl:value-of></p>
					<xsl:choose>
						<xsl:when test="Marks &gt;70">
							<p>Dist</p>
						</xsl:when>
						<xsl:when test="Marks &gt;60 and Marks &lt;70">
							<p>First</p>
						</xsl:when>
						<xsl:when test="Marks &gt;40 and Marks &lt;60">
							<p>Second</p>
						</xsl:when>
						<xsl:otherwise>
							<p>Fail</p>
						</xsl:otherwise>
					</xsl:choose>
					<hr></hr>
					</xsl:for-each>
				</br>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>