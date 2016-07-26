# MPAutoCompleteTextField
Repository for Autocomplete Textfield from API, Coredata as well Json response you can manage it  

# Usage 
Clone this repository and Add this code to your class but before that your will requried AUTOCOMPLETE FRAMEWORK and add to your project

[screenshot1]: https://github.com/mpatelCAS/MPAutoCompleteTextField/blob/master/Simulator%20Screen%20Shot%20Jul%2026%2C%202016%2C%203.50.08%20PM.png

```obj-c

    #import "Private.h" 

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


    #pragma mark - Delegate

   - (void)textField:(AutoCompletionTextField*)textField didSelectItem:(id)selectedItem
  {
    if ([textField isEqual:_coreDataTextField]) {
        Items *item = selectedItem;
        [textField setText:item.title];
    }
    else if ([textField isEqual:_jsonTextField] || [textField isEqual:_apiTextField]) {
        JSONItem *item = selectedItem;
        [textField setText:item.title];
    }
  }

  - (void)placeholderTextField:(UITextField *)placeholderTextField didSelectItem:(id)selectedItem {
    Items *item = selectedItem;
    [placeholderTextField setText:item.title];
  }
