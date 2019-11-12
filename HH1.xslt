<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:msxsl="urn:schemas-microsoft-com:xslt" exclude-result-prefixes="msxsl"
>
    <xsl:output method="html" indent="yes"/>

	<xsl:template match="/">

		<html>
			<head>
				<meta charset="UTF-8" />
				<title>Hypertext hypermedia</title>
				<meta name="viewport" content="width=device-width, initial-scale=1.0" />
				<link rel="stylesheet" href="index.css" />
			</head>
			<body>
				<div id="wrapper">
					<header>
						<h1>Hypertext hypermedia</h1>
					</header>
          <xsl:call-template name="nav"/>
					<!-- menu for moving within a page -->

					<div id="content">
						<!-- a place for information about lecture, laboratory, project and links -->
						<h3 id="lecture">Lecture
						<!-- reference to a template that allows to display a picture -->
              <xsl:apply-templates select="course/information/media/image"/>
						</h3>
						<p>
							Information about the lecture.
						</p>
						<!-- information about lecture -->
            <xsl:apply-templates select="course/classes[@kind='lecture']/component"/>
						<!-- reference to a template that allows to display information about laboratory and project -->
            <xsl:apply-templates select="course/classes"/>
            <xsl:apply-templates select="course/project"/>
            
						<h3 id="links">Additional information about HTML and XML</h3>
						<ul>
							<!-- reference to a template that allows to display links -->
              <xsl:apply-templates select="course/information/links/link"/>
						</ul>

					</div>
					<!-- end content -->
				</div>
				<!-- end wrapper -->
				<footer>
					<xsl:apply-templates select="course/author"/> <!-- reference to a template that allows for displaying information about the name and surname of the student -->
				</footer>
			</body>
		</html>

	</xsl:template>

	<xsl:template match="author">
		Copyright 2019, <xsl:value-of select="name"/><xsl:text> </xsl:text><xsl:value-of select="surname"/> 
	</xsl:template>

	<xsl:template match="classes">
		<h3 id="lab">Laboratory</h3>
		<p>
			Information about the laboratory.
		</p>
		<ol>

		</ol>
	</xsl:template>


  <xsl:template name="nav">
    <nav>
      <ul>
        <li>
          <a href="#lecture">Lecture</a>
        </li>
        <li>
          <a href="#lab">Laboratory</a>
        </li>
        <li>
          <a href="#project">Project</a>
        </li>
        <li>
          <a href="#links">Links</a>
        </li>
      </ul>
    </nav>
  </xsl:template>
  <xsl:template match="media/image">
    <img>
      <xsl:attribute name="src">
        <xsl:value-of select="@source"/>
      </xsl:attribute>
      <xsl:attribute name="class">
        right
      </xsl:attribute>
      <xsl:attribute name="title">
        <xsl:value-of select="."/>
      </xsl:attribute>
    </img>
  </xsl:template>
  <xsl:template match="links/link">
    <xsl:if test="not(position()=last())">
    <li>
      <a>
    <xsl:attribute name="href">
      <xsl:value-of select="@source"/>
    </xsl:attribute>
        <xsl:value-of select="."/>
        </a>    
    </li>
   </xsl:if>
  </xsl:template>
  <xsl:template match="classes[@kind='lecture']/component">
    <xsl:for-each select="theme">
      <xsl:sort select="." order="ascending"/>
      <xsl:value-of select="position()"/>
      <xsl:text>.</xsl:text>
      <xsl:value-of select="."/>
      <br/>
    </xsl:for-each>
  </xsl:template>

  <xsl:template match="classes">
    <xsl:if test="@kind='laboratory'">
      <h3 id="lab">Laboratory</h3>
      <p>
        Information about laboratory
      </p>
      <ol>
        <xsl:for-each select="component">
          <li>
            <xsl:value-of select="topic"/>
          </li>
          <ul>
            <xsl:for-each select="theme">
              <li><xsl:value-of select="."/>
              </li>
            </xsl:for-each>
          </ul>
        </xsl:for-each>       
      </ol>  
    </xsl:if>
  </xsl:template>


  <xsl:template match="classes[@kind='project']">
			<h3 id="project">Project</h3>
			<p>
				Information about the project.
			</p>
			<table style="width:50%; border: 5px solid red">
				<tr>
					<th>Title of the project</th>
					<th>Score</th>
				</tr>
        <xsl:apply-templates select="component"/>
			</table>
  </xsl:template>
  <xsl:template match="classes[@kind='project']/component">
    <tr>
      <td>
        <xsl:value-of select="topic"/>
      </td>
      <td>
        <xsl:value-of select="score"/>
      </td>
    </tr>
  </xsl:template>
  
</xsl:stylesheet>
