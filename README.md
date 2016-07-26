# MPAutoCompleteTextField
Repository for Autocomplete Textfield from API, Coredata as well Json response you can manage it  

# Usage 
Clone this repository and Add this code to your class but before that your will requried AUTOCOMPLETE FRAMEWORK and add to your project

```obj-c
    AutoCompletionUIKitDynamicsAnimation *animation = [[AutoCompletionUIKitDynamicsAnimation alloc] init];
    
    CoreDataDataSource *coreDataDataSource = [[CoreDataDataSource alloc] init];
    _coreDataTextField.suggestionsResultDataSource = coreDataDataSource;
    _coreDataTextField.animationDelegate = animation;
    _coreDataTextField.suggestionsResultDelegate = self;
    
    JSONDataSource *jsonDataSource = [[JSONDataSource alloc] init];
    _jsonTextField.suggestionsResultDataSource = jsonDataSource;
    _jsonTextField.suggestionsResultDelegate = self;
    
    APIDataSource *apiDataSource = [[APIDataSource alloc] init];
    apiDataSource.requestURL = @"YOUR CUSTOM URL";
    _apiTextField.suggestionsResultDataSource = apiDataSource;
    _apiTextField.suggestionsResultDelegate = self;
