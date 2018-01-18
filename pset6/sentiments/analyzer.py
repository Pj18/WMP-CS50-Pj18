import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""

        # TODO
        self.positives=set()
        file=open(positives,"r")
        for line in file:
            if line.startwith(';')==False and line.startwith('\n')==False:
                self.positives.add(line.strip('\n'))
        file.close()


        self.negatives=set()
        file=open(negatives,"r")
        for line in file:
            if line.startwith(';')==False and line.startwith('\n')==False:
                self.negatives.add(line.strip('\n'))
        file.close()



    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""

        # TODO
        total_score=0
        tokenizer = nltk.tokenize.TweetTokenizer()
        tokens=tokenizer.tokenize(text)
        for word in tokens:
            if str.lower(word) in self.positives:
                score = 1
            elif str.lower(word) in self.negatives:
                score = -1
            else:
                score = 0
                total_score=total_score+score
        return total_score
