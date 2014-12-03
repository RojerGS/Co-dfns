<?xml version="1.0" encoding="utf-8" ?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:import href="XSL/fo/docbook.xsl"/>
  <xsl:import href="titlepage.xsl" />
  <xsl:param name="body.font.master" select="10" />
  <xsl:param name="body.font.family" select="'Cambria'" />
  <xsl:param name="title.font.family" select="'Calibri'" />
  <xsl:param name="monospace.font.family" select="'APL385 Unicode,FreeMono for APL'" />
  <xsl:param name="symbol.font.family" select="''" />
  <xsl:param name="fop1.extensions" select="1" />
  <xsl:param name="use.extensions" select="1" />

  <xsl:attribute-set name="section.title.level1.properties">
    <xsl:attribute name="font-weight">normal</xsl:attribute>
  </xsl:attribute-set>

  <xsl:attribute-set name="section.title.level2.properties">
    <xsl:attribute name="font-weight">normal</xsl:attribute>
  </xsl:attribute-set>

  <xsl:attribute-set name="section.title.level3.properties">
    <xsl:attribute name="font-weight">normal</xsl:attribute>
  </xsl:attribute-set>

</xsl:stylesheet>