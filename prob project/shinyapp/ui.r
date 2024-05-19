library(shiny)

# Define UI for application
shinyUI(fluidPage(
  # Add CSS styling for color changes
  tags$head(
    tags$style(HTML("
      /* Change background color of the entire app */
      body, .navbar-default, .tab-content {
        background-color: #f2f2f2 !important; /* light gray */
      }

      /* Change text color */
      .container,
      .panel-title,
      .selectize-input,
      .well,
      .btn,
      .checkbox-inline,
      .radio-inline,
      .control-label {
        color: #333 !important; /* dark gray */
      }

      /* Change title panel color */
      .navbar-default {
        background-color: #636e72 !important; /* dark gray */
        border-color: #636e72 !important; /* dark gray */
      }

      /* Change title text color */
      .navbar-default .navbar-brand {
        color: #100 !important; /* black */
      }

      /* Change sidebar background color */
      .sidebar {
        background-color: #2d3436 !important; /* very dark gray */
      }

      /* Change sidebar font color */
      .sidebar .selectize-input,
      .sidebar .well,
      .sidebar .btn,
      .sidebar .checkbox-inline,
      .sidebar .radio-inline,
      .sidebar .control-label {
        color: #fff !important; /* white */
      }

      /* Change tab panel color */
      .nav-tabs > li.active > a,
      .nav-tabs > li.active > a:hover,
      .nav-tabs > li.active > a:focus {
        background-color: #428bca !important; /* blue */
        border-color: #428bca !important; /* blue */
        color: #fff !important; /* white */
      }

      /* Change plot background color */
      .shiny-plot-output {
        background-color: #fff !important; /* white */
      }

      /* Change text color in plot */
      .svg-container text {
        fill: #333 !important; /* dark gray */
      }

      /* Change scrollbar color */
      ::-webkit-scrollbar {
        width: 12px !important;
      }
      ::-webkit-scrollbar-track {
        background: #f1f1f1 !important; /* light gray */
      }
      ::-webkit-scrollbar-thumb {
        background: #888 !important; /* dark gray */
      }
    "))
  ),
  
  # Header or Title Panel 
  titlePanel(title = h4("US demographic Dataset", align = "center")),
  sidebarLayout(
    # Sidebar panel
    sidebarPanel(
      selectInput("var", " [Normal Variables]Select the variable from the census dataset for (mean and histograms)",choices = c("TotalPop" = 4, "Men" = 5, "Women" = 6), selected = NULL, selectize = FALSE),
      br(),
      selectInput("var2", " [Skewed Variables]Select the variable from the census dataset for (skewed histograms)",choices = c("Hispanic" = 7, "White" = 8, "Black" = 9), selected = NULL, selectize = FALSE),
      br(),
      selectInput("var3", " Histogram of No.of Employed people above 16 years in US",choices = c("Employed" = 32 ), selected = 32, selectize = FALSE),
      br(),
      sliderInput("bins", " Select the number of BINs for histogram", min=5, max = 25, value=15),
      br(),
      radioButtons("color", " Select the colour of histogram", choices=c("Green", "Red", "Yellow"), selected ="Green", inline = TRUE),
      tags$b(" Scatterplots"), 
      selectInput("var6", "-> variable1",choices = c("White" = 8 ,"no_of_men" = 5 ), selected = NULL, multiple = FALSE, selectize = FALSE),
      selectInput("var7","-> variable2",choices = c("professional" = 20, "construction(employed)" = 23), selected = NULL, multiple = FALSE, selectize = FALSE),
      br(),
      selectInput("var9","T_Test ",choices = c("Percent[Native and Asian]" = 1, "Percent[no.of men and no.of women]" = 2 ), selected = 1, multiple = FALSE, selectize = FALSE),
      br(),
      selectInput("var10","linear regression model with Income as the dependant variable ",choices = c("Linealy Regress" = 1), selected = 1, multiple = FALSE, selectize = FALSE),
      br(),
      selectInput("var11","BoxPlots ",choices = c("Inocome plot b/w Alabama and Alaska" = 1, "Population plot in 6 countries" = 2), selected = 1, multiple = FALSE, selectize = FALSE),
      br(),
      selectInput("var12", "dNORM Distribution b/w Lower bound's and upper bound's",choices = c("Income" = 14), selected = NULL, selectize = FALSE),
      br(),
    ),
    
    # Main Panel
    mainPanel(
      tabsetPanel(type="tab", 
                  tabPanel("Mean", verbatimTextOutput("mean_t")),
                  tabPanel("Data(head)", tableOutput("data")),
                  tabPanel("Plot(normal)", plotOutput("myhist")),
                  tabPanel("Plot(skewed)", plotOutput("myhist2")),
                  tabPanel("Plot(emp above 16)", plotOutput("myhist3")),
                  tabPanel("Plot(scatter)", plotOutput("myscatter")),
                  tabPanel("T_Test", verbatimTextOutput("t_test")),
                  tabPanel("Plot(BOXPLOT)", plotOutput("b_boxplot")),
                  tabPanel("Linear Regression", verbatimTextOutput("regression")),
                  tabPanel("dNorm", plotOutput("d_dnorm")),
      )
    )
  )
))