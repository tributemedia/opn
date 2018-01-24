# OPN
Drupal 7 feature used for importing news articles from Office Product News.

## Install

1. Upload and enable feature as you would any other module or feature.
2. Visit http://www.officeproductnews.net/feeds
3. Select all manufacturers that apply to the client, under the "Tags" filter. Only select manufacturers! Ignore all other tags.
4. Select all options under the "Type" filter, and apply the filters.
5. In the browser address bar, you should see something like http://www.officeproductnews.net/feeds?title=&tags%5B%5D=81&type%5B%5D=3&type%5B%5D=120&type%5B%5D=122&type%5B%5D=5&type%5B%5D=6. Between "/feeds", and "?", add "/opn-export.xml". So the URL should look something like http://www.officeproductnews.net/feeds/opn-export.xml?title=&tags%5B%5D=81&type%5B%5D=3&type%5B%5D=120&type%5B%5D=122&type%5B%5D=5&type%5B%5D=6
Copy the edited URL.
6. Go back to the client site and create a new OPN Feed, using the URL you copied. 30 new nodes should import when you save the Feed.
